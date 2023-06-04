#include "confidential.h"
#include "ui_confidential.h"

Confidential::Confidential(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Confidential)
{
    ui->setupUi(this);
}

Confidential::~Confidential()
{
    delete ui;
}


void Confidential::on_login_pushButton_clicked()
{
    ui->login_label->setText("True");

    QDir tfPath("C:/Users/Elias/3D Objects/Computer sciences/Dev/golang/A My Creations/Confidentiel/Qt/testFiles");
    QString dbPath = tfPath.filePath("myDb.db");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("MyServer");
    db.setDatabaseName(dbPath);

    //Encrypt The Database whith an crypto algo like xchacha20 using the password put in the text input

    if (db.open())
        qDebug("The database connection is open.");

    //bool ok = db.open();

}


void Confidential::on_registerpushButton_clicked()
{
    ui->register_label->setText("True");

    QDir tfPath("C:/Users/Elias/3D Objects/Computer sciences/Dev/golang/A My Creations/Confidentiel/Qt/testFiles");
    QString dbPath = tfPath.filePath("myDb.db");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("MyServer");
    db.setDatabaseName(dbPath);

    if (db.open())
        qDebug("The database connection is open.");

    QSqlQuery query; // And he should insert some data, as the answer above mentioned
    query.exec("create table person (id integer primary key, firstname varchar(20), lastname varchar(30), age integer)");

    db.close();
    //Encrypt The Database whith an crypto algo like xchacha20 using the password put in the text input


    //bool ok = db.open();
}

