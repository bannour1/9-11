#ifndef VOYAGEUR_H
#define VOYAGEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class voyageur
{int cin;
    int tel;
    QString nom;
    QString prenom;

public:

    voyageur();
    voyageur(int,int,QString,QString);
    int getcin(){return cin;}
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int,int);
    ~voyageur(){}

};

#endif // VOYAGEUR_H
