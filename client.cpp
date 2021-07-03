#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinimizeButtonHint);
    this->LOGIN = new login();
    this->mainTimer = new QTimer(this);
    this->mainTimer->start(5000); //此处填写毫秒为单位的计数,int
    connect(this->mainTimer, SIGNAL(timeout()), this, SLOT(this->to_callback()));
}

Client::~Client()
{
    delete ui;
}
void Client::to_callback(void) {
    this->close();
    this->LOGIN->show();
}
