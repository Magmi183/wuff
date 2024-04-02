from wuff import (
    CompletionParams, Position, CompletionContext,
    CompletionTriggerKind, TextDocumentPositionParams,
    TextDocumentIdentifier, CompletionItem
)

def create_completion_params(uri, line, char, trigger_char=":"):
    return CompletionParams(
        TextDocumentIdentifier(uri),
        Position(line, char),
        CompletionContext(CompletionTriggerKind.TriggerCharacter, trigger_char)
    )

def test_complete_reference(analyzer, file1_uri):
    cp = create_completion_params(file1_uri, 4, 41)
    results = analyzer.complete(cp)

    labels = ["ct1", "ct2", "ct3"]
    for label in labels:
        assert any(result.label == label for result in results), f"Label {label} not found in results"

def test_complete_nothing(analyzer, file1_uri):
    cp = create_completion_params(file1_uri, 0, 0)
    results = analyzer.complete(cp)
    assert len(results) == 0
