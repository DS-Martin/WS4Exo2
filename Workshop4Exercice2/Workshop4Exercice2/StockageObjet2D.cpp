#include "StockageObjet2D.h"
#include <iostream>
#include "pch.h"
StockageObjet2D::StockageObjet2D() : Head(nullptr), Tail(nullptr) {}

StockageObjet2D::~StockageObjet2D() {
    // Libérer la mémoire 
    Objet2D* current = Head;
    while (current != nullptr) {
        Objet2D* next = current->getSuivant();
        delete current;
        current = next;
    }
}

void StockageObjet2D::AtHead(Objet2D* objet) {
    objet->setSuivant(Head);
    Head = objet;
    if (Tail == nullptr) {
        Tail = objet;
    }
}

void StockageObjet2D::AtTail(Objet2D* objet) {
    if (Tail == nullptr) {
        Head = Tail = objet;
    }
    else {
        Tail->setSuivant(objet);
        Tail = objet;
    }
}

void StockageObjet2D::AtIndex(Objet2D* objet, int index) {
    if (index == 0) {
        AtHead(objet);
    }
    else {
        Objet2D* current = Head;
        for (int i = 1; i < index && current != nullptr; ++i) {
            current = current->getSuivant();
        }

        if (current != nullptr) {
            objet->setSuivant(current->getSuivant());
            current->setSuivant(objet);

            if (current == Tail) {
                Tail = objet;
            }
        }
        else {
            std::cerr << "Index hors limites." << std::endl;
        }
    }
}

void StockageObjet2D::RemoveHead() {
    if (Head != nullptr) {
        Objet2D* temp = Head;
        Head = Head->getSuivant();
        delete temp;

        if (Head == nullptr) {
            Tail = nullptr;
        }
    }
}

void StockageObjet2D::RemoveTail() {
    if (Head != nullptr) {
        if (Head == Tail) {
            delete Head;
            Head = Tail = nullptr;
        }
        else {
            Objet2D* current = Head;
            while (current->getSuivant() != Tail) {
                current = current->getSuivant();
            }

            delete Tail;
            Tail = current;
            Tail->setSuivant(nullptr);
        }
    }
}

void StockageObjet2D::RemoveAtIndex(int index) {
    if (index == 0) {
        RemoveHead();
    }
    else {
        Objet2D* current = Head;
        for (int i = 1; i < index && current != nullptr; ++i) {
            current = current->getSuivant();
        }

        if (current != nullptr && current->getSuivant() != nullptr) {
            Objet2D* temp = current->getSuivant();
            current->setSuivant(temp->getSuivant());
            delete temp;

            if (current->getSuivant() == nullptr) {
                Tail = current;
            }
        }
        else {
            std::cerr << "Index hors limites." << std::endl;
        }
    }
}

void StockageObjet2D::afficherInfos() {
    Objet2D* current = Head;
    while (current != nullptr) {
        std::cout << current->afficheInfo() << std::endl;
        current = current->getSuivant();
    }
}
