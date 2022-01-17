#ifndef CARBONINTERFACE_H
#define CARBONINTERFACE_H

#include <QDialog>
#include <QProcess>
#include "resultinterface.h"

namespace Ui {
class CarbonInterface;
}

class CarbonInterface : public QDialog
{
    Q_OBJECT

public:
    explicit CarbonInterface(QWidget *parent = nullptr);
    ~CarbonInterface();

    ResultInterface *resultInterface;

private slots:
    void readBashStandardOutputInfo();
    void readBashStandardErrorInfo();

    void on_c_back_Button_clicked();

    void on_pushButton_clicked();

    void on_run_geometry_button_clicked();

    void on_change_geometry_button_clicked();

    void on_change_constant_button_clicked();

    void on_run_constant_button_clicked();

    void on_run_boundary_button_clicked();

    void on_change_boundary_button_clicked();

    void on_run_function_button_clicked();

    void on_change_function_button_clicked();

    void on_change_control_button_clicked();

    void on_help_constant_button_clicked();

    void on_run_button_clicked();

    void on_pause_run_button_clicked();

    void on_open_paraview_Button_clicked();

    void on_view_result_button_clicked();

private:
    Ui::CarbonInterface *ui;
    QProcess *m_process_bash = new QProcess;
    int delete_flag=1;

signals:
    void ExitWin();
};

#endif // CARBONINTERFACE_H
