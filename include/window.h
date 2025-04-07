#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <ButtonHandler.h>

class Window : public QWidget {
public:
    Window(); // Constructor declaration

private:
    // Add any members here (like widgets, layout, etc.)
    QPushButton *button;
    ButtonHandler *buttonHandler;
    
};

#endif // WINDOW_H
