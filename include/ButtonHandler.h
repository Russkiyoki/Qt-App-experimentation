#ifndef BUTTONHANDLER_H
#define BUTTONHANDLER_H

#include <QObject>
#include <QPushButton>

class ButtonHandler : public QObject {
    Q_OBJECT // Necessary for Qt's signal/slot system

public:
    explicit ButtonHandler(QPushButton *button); // Constructor
    ~ButtonHandler(); // Destructor (important for QObject classes)

private slots:
    void onButtonClicked(); // Slot for handling button click

private:
    QPushButton *button;
};

#endif // BUTTONHANDLER_H
