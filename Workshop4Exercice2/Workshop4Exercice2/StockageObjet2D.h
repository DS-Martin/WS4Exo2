#pragma once
#pragma once
#include "Objet2D.h"

class StockageObjet2D {
private:
    Objet2D* Head; // Pointeur tête
    Objet2D* Tail; // Pointeur queue

public:
    StockageObjet2D();
    ~StockageObjet2D();

    // Méthodes Add
    void AtHead(Objet2D* objet);
    void AtTail(Objet2D* objet);
    void AtIndex(Objet2D* objet, int index);

    // Méthodes Remove
    void RemoveHead();
    void RemoveTail();
    void RemoveAtIndex(int index);

    // Méthode pour afficher les infos
    void afficherInfos();
};
