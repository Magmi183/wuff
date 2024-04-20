from wuff import TextDocumentPositionParams
from wuff import TextDocumentIdentifier
from wuff import Position


def test_hover_docpart(analyzer, file1_uri):
    result = analyzer.hover(TextDocumentPositionParams(
        TextDocumentIdentifier(file1_uri),
        Position(0, 3)))
    assert len(result) > 0, "Expected hover result to be non-empty"
    assert "document part" in result, "Expected 'document part' to be in the hover result"


def test_hover_none(analyzer, file1_uri):
    result = analyzer.hover(TextDocumentPositionParams(
        TextDocumentIdentifier(file1_uri),
        Position(2, 3)))
    assert len(result) == 0, "Expected hover result to be empty"
