#include "../include/ButtonHandler.h"
#include <QMessageBox>

// Constructor: initializes button and connects signal to slot
ButtonHandler::ButtonHandler(QPushButton *button) : QObject(nullptr), button(button) {
    connect(button, &QPushButton::clicked, this, &ButtonHandler::onButtonClicked);
    button->resize(50,20);
}

// Destructor: required for QObject-based classes
ButtonHandler::~ButtonHandler() {
    // Nothing special, but necessary for proper cleanup
}

// Slot to handle button click event
void ButtonHandler::onButtonClicked() {
    QMessageBox::information(nullptr, "Button Clicked", "You pressed the button!");
}
