#include <QApplication>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QSplitter>
#include <QToolBar>
#include <QAction>
#include <QStatusBar>
#include <QFont>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("EduCpp");
    window.resize(1100, 750);

    // Main layout
    auto *splitter = new QSplitter(Qt::Vertical);

    // Code editor
    auto *editor = new QPlainTextEdit();

    editor->setFont(QFont("Consolas", 12));

    editor->setPlainText(
        "#include <iostream>\n"
        "using namespace std;\n"
        "\n"
        "int main() {\n"
        "    cout << \"Hello, World!\" << endl;\n"
        "    return 0;\n"
        "}\n"
    );

    // Output console
    auto *output = new QPlainTextEdit();

    output->setReadOnly(true);
    output->setPlaceholderText(
        "Program output will appear here..."
    );

    // Arrange editor and console
    splitter->addWidget(editor);
    splitter->addWidget(output);

    splitter->setStretchFactor(0, 4);
    splitter->setStretchFactor(1, 1);

    window.setCentralWidget(splitter);

    // Toolbar
    QToolBar *toolbar = window.addToolBar("Main");

    QAction *runAction = toolbar->addAction("Run");

    // Run functionality will be implemented next
    runAction->setEnabled(false);

    // Status bar
    window.statusBar()->showMessage("Ready");

    window.show();

    return app.exec();
}