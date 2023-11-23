#pragma once

#include <iostream>
#include <string>

using namespace System;
using namespace std;

class Objet2D {
private:
    int dim1, dim2;
    Objet2D* Suivant; // Membre privé "Suivant" ajouté pour WS_4

public:
    Objet2D();
    Objet2D(int tdim1, int tdim2);
    virtual int getPerimetre();
    virtual int getAire();
    virtual string afficheInfo();

    // Accesseur pour Suivant
    void setSuivant(Objet2D* suivant);
    Objet2D* getSuivant();
};
