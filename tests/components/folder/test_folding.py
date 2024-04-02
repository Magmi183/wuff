from wuff import TextDocumentIdentifier, FoldingRange


def get_folding_ranges(analyzer, uri):
    return analyzer.folding_ranges(TextDocumentIdentifier(uri))


def test_folding_ranges_in_populated_document(analyzer, file2_uri):
    ranges = get_folding_ranges(analyzer, file2_uri)
    expected_starts = [(0, 0), (4, 0)]
    expected_kinds = ["region", "region", "region"]

    assert len(ranges) == 3, "Expected 3 folding ranges"

    for i, (start_line, start_char) in enumerate(expected_starts):
        assert ranges[i].start_line == start_line and ranges[
            i].start_character == start_char, f"Range {i} start position mismatch"
        assert ranges[i].kind == expected_kinds[i], f"Range {i} kind mismatch"

    assert ranges[2].kind == expected_kinds[2], "Range 2 kind mismatch"


def test_folding_ranges_in_empty_document(analyzer, empty_uri):
    ranges = get_folding_ranges(analyzer, empty_uri)
    assert len(ranges) == 0, "Expected no folding ranges in an empty document"
