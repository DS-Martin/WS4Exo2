#include "Objet2D.h"
#include "pch.h"
Objet2D::Objet2D() : dim1(0), dim2(0), Suivant(nullptr) {};

Objet2D::Objet2D(int tdim1, int tdim2) : dim1(tdim1), dim2(tdim2), Suivant(nullptr) {};

int Objet2D::getPerimetre() {
    return 0;
}

int Objet2D::getAire() {
    return 0;
}

string Objet2D::afficheInfo() {
    return "Objet2D function";
}

// Définition des accesseurs de Suivant
void Objet2D::setSuivant(Objet2D* suivant) {
    Suivant = suivant;
}

Objet2D* Objet2D::getSuivant() {
    return Suivant;
}
