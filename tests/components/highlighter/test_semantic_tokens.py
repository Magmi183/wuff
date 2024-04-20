from wuff import TextDocumentIdentifier


def test_semantic_tokens(analyzer, file1_uri):
    tokens = analyzer.semantic_tokens(TextDocumentIdentifier(file1_uri))
    expected_token_count = 5  # Expected number of semantic tokens
    integers_per_token = 5  # According to LSP, each token is represented by 5 integers

    # Asserting the total number of integers (tokens * integers_per_token)
    total_integers = expected_token_count * integers_per_token
    assert len(
        tokens) == total_integers, f"Expected {total_integers} integers representing {expected_token_count} tokens"


def test_semantic_tokens_empty(analyzer, empty_uri):
    tokens = analyzer.semantic_tokens(TextDocumentIdentifier(empty_uri))
    assert len(tokens) == 0, "Expected no semantic tokens in an empty document"
