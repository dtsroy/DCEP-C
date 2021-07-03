#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

#include "login.h"

#include <QTimer>

class Client : public QMainWindow
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void to_callback(void);

private:
    Ui::Client *ui;
    login *LOGIN;
    QTimer *mainTimer;
};
#endif // CLIENT_H
