#include "../include/window.h"
#include "../include/ButtonHandler.h"
#include <QPushButton>
#include <QVBoxLayout>

Window::Window() {
    this->resize(800, 420);
    this->setStyleSheet("background-color: #FFFFFF;");

    QPushButton *button = new QPushButton("Press Me", this);
    
    button->setFixedSize(80, 30);  // Stops it from stretching
    button->setStyleSheet("color: #24783E");

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(button, 0, Qt::AlignBottom | Qt::AlignLeft);  // Just centers it

    this->setLayout(layout); // Directly apply layout

    buttonHandler = new ButtonHandler(button);
}
