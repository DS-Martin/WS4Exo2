#pragma once
#include "Rectangle.h" 
#include <iostream>


class Cube : public Rectangle {



public:

    Cube();

    Cube(int tcote);

    int getPerimetre();

    int getAire();

    int getCote();

    string afficheInfo();

};