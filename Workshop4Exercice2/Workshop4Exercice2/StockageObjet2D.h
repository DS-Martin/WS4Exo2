#pragma once
#pragma once
#include "Objet2D.h"

class StockageObjet2D {
private:
    Objet2D* Head; // Pointeur t�te
    Objet2D* Tail; // Pointeur queue

public:
    StockageObjet2D();
    ~StockageObjet2D();

    // M�thodes Add
    void AtHead(Objet2D* objet);
    void AtTail(Objet2D* objet);
    void AtIndex(Objet2D* objet, int index);

    // M�thodes Remove
    void RemoveHead();
    void RemoveTail();
    void RemoveAtIndex(int index);

    // M�thode pour afficher les infos
    void afficherInfos();
};
