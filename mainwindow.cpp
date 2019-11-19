#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "billet.h"
#include "voyageur.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);
ui->tabbillet->setModel(tmpBillet.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    int code = ui->le_code->text().toInt();
    QString date = ui->la_date->text();
    QString destination= ui->la_des->text();
      billet e(code,date,destination);
      bool test=e.modifier(code,date);
      if(test)
    {ui->tabbillet->setModel(tmpBillet.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("modifier un Personnel"),
                      QObject::tr("Personnel modifier.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un Personnel"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_ajouterbillet_clicked()
{
    int code = ui->le_code_billet->text().toInt();
    QString date= ui->le_date_billet->text();
    QString destination= ui->le_destination_billet->text();
  billet e(code,date,destination);
  bool test=e.ajouter();
  if(test)
{ui->tabbillet->setModel(tmpBillet.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un billet"),
                  QObject::tr("billet ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un billet"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_supprimerbillet_clicked()
{
    int code = ui->le_code_->text().toInt();
    bool test=tmpBillet.supprimer(code);
    if(test)
    {ui->tabbillet->setModel(tmpBillet.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un billet"),
                    QObject::tr("billet supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un billet"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_ajoutervoyageur_clicked()
{

    int cin = ui->le_cin1->text().toInt();
    int tel=ui->le_telephone->text().toInt();
    QString nom= ui->le_nom->text();
    QString prenom= ui->le_prenom->text();
  voyageur v(cin,tel,nom,prenom);
  bool test=v.ajouter();
  if(test)
{ui->tabvoyageur->setModel(tmpvoyageur.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un voyageur"),
                  QObject::tr("billet ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un voyageur"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_supprimervoyageur_clicked()
{
    int code = ui->le_cin_5->text().toInt();
    bool test=tmpBillet.supprimer(code);
    if(test)
    {ui->tabvoyageur->setModel(tmpvoyageur.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un voyageur"),
                    QObject::tr("voyageur supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un voyageur"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_2_clicked()
{
    int code = ui->le_code->text().toInt();
    QString date = ui->la_date->text();
    QString destination= ui->la_des->text();
      billet e(code,date,destination);
      bool test=e.modifier(code,date);
      if(test)
    {ui->tabbillet->setModel(tmpBillet.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("modifier un Personnel"),
                      QObject::tr("Personnel modifier.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un Personnel"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

}
