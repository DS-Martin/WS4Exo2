#pragma once 
#include "pch.h"
#include "StockageObjet2D.h"
#include <iostream>

int main() {
    StockageObjet2D stockage;

    char choix;
    do {
        std::cout << "Vous allez saisir les informations pour un objet (R)ectangle, (C)ube, ou (Q)uitter : ";
        std::cin >> choix;

        if (choix == 'R' || choix == 'r') {
            int longueur, largeur;
            std::cout << "Longueur du rectangle : ";
            std::cin >> longueur;
            std::cout << "Largeur du rectangle : ";
            std::cin >> largeur;

            Rectangle* rectangle = new Rectangle(longueur, largeur);
            stockage.AtTail(rectangle);
        }
        else if (choix == 'C' || choix == 'c') {
            int cote;
            std::cout << "Cote du cube : ";
            std::cin >> cote;

            Cube* cube = new Cube(cote);
            stockage.AtTail(cube);
        }

    } while (choix != 'Q' && choix != 'q');

    // Affichage des informations des objets stockés
    std::cout << "\nInformations des objets stockés :\n";
    stockage.afficherInfos();

    return 0;
}
