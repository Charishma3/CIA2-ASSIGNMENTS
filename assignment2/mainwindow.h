#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_displayimage_clicked(bool checked);

    void on_warning_clicked();

    void on_critical_clicked();

    void on_question_clicked();

    void on_information_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
