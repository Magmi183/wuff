from wuff import TextDocumentIdentifier, Diagnostic, DiagnosticSeverity

def diagnose_document(analyzer, uri):
    return analyzer.diagnose(TextDocumentIdentifier(uri))

def test_diagnose_healthy(analyzer, file1_uri):
    diagnostics = diagnose_document(analyzer, file1_uri)
    assert len(diagnostics) == 0, "Expected no diagnostics for a healthy file"

def test_diagnose_errors(analyzer, empty_uri):
    diagnostics = diagnose_document(analyzer, empty_uri)
    assert len(diagnostics) == 1, "Expected exactly 1 diagnostic for an empty file"
    assert diagnostics[0].severity == DiagnosticSeverity.Error, "Expected the diagnostic severity to be 'Error'"

def test_diagnose_errors_missing(analyzer, file3_uri):
    diagnostics = diagnose_document(analyzer, file3_uri)
    assert len(diagnostics) == 1, "Expected exactly 1 diagnostic for file with missing elements"
    assert diagnostics[0].severity == DiagnosticSeverity.Error, "Expected the diagnostic severity to be 'Error'"
    assert diagnostics[0].message == "Syntax error: MISSING short_inner_environment_body", "Expected specific syntax error message"
