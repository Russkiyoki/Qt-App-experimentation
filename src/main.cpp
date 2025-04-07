#include <QApplication>
#include <QWidget>
#include "../include/window.h" // Include custom window class header
#include "../include/ButtonHandler.h" // Include custom button handler class header

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create an instance of Window
    Window window;
    window.setWindowTitle("Interactive UI");

    // Create a QPushButton to pass to ButtonHandler
    QPushButton *button = new QPushButton("Submit", &window);

    // Pass the button to ButtonHandler
    ButtonHandler buttonHandler(button);

    window.show(); // Show the window
    return app.exec(); // Start the event loop
}
