#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTableView>
#include "G:\Qtkoulu\BankSim_0.01\pinkoodiDLL\pinkoodidll.h"
#include "G:\Qtkoulu\lib\connectlib\connectlib.h"
#include "G:\Qtkoulu\BankSim_0.01\valuuttamuunninDLL\valuuttamuunnindll.h"
#include "G:\Qtkoulu\BankSim_0.01\rfidDLL\rfiddll.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void kirjautuminen();
    bool showMW();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_nosta_clicked();

    void on_pushButton_pano_clicked();

    void on_pushButton_12Syotapin_clicked();



    void on_pushButton_visa_clicked();

    void on_pushButton_pankki_clicked();

    void on_pushButton_maksa_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_lineEdit_3_editingFinished();

    void on_pushButton_12Muunna_clicked();

    void on_pushButton_11_nostaMuunnos_clicked();

    void RFIDKoppi(QString RFID);



private:
    QString pin;
    QString muunnos;

    Ui::MainWindow *ui;
    PinkoodiDLL *olioPinkoodiDLL;
    Connectlib db;
    int pankkiVisa;
    int rfidOikein;
    ValuuttamuunninDLL *olioValuuttamuunninDLL;
    RfidDLL *oliorfidDLL;

};

#endif // MAINWINDOW_H
