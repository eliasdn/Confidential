#ifndef CONFIDENTIAL_H
#define CONFIDENTIAL_H

#include <QSqlQuery>
#include <QDir>
#include <QSqlDatabase>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Confidential; }
QT_END_NAMESPACE

class Confidential : public QMainWindow
{
    Q_OBJECT

public:
    Confidential(QWidget *parent = nullptr);
    ~Confidential();

private slots:
    void on_login_pushButton_clicked();

    void on_registerpushButton_clicked();

private:
    Ui::Confidential *ui;
};
#endif // CONFIDENTIAL_H
