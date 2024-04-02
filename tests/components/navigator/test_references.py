from wuff import ReferenceParams, TextDocumentIdentifier, Position, CompletionItem

def create_reference_params(uri, line, char, include_declaration):
    return ReferenceParams(TextDocumentIdentifier(uri), Position(line, char), include_declaration)

def get_references(analyzer, uri, line, char, include_declaration):
    params = create_reference_params(uri, line, char, include_declaration)
    return analyzer.references(params)

def test_find_references(analyzer, file2_uri):
    references = get_references(analyzer, file2_uri, 1, 11, False)
    assert len(references) == 3, "Expected to find 3 references"

def test_find_references_include_declaration(analyzer, file2_uri):
    references = get_references(analyzer, file2_uri, 1, 11, True)
    assert len(references) == 4, "Expected to find 4 references including the declaration"
