#include "carre.h"
#include <iostream>
using namespace std;

void CCarre::Setsx(int sx1)
{
	this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	this->sy = sy1;
}

void CCarre::Setcote(int cote1)
{
	this->cote = cote1;
}

void CCarre::Afficher()
{
	cout << "Tests" << endl;
	std::cout << sx << sy << cote << endl;
}


int CCarre::Getsx()
{
	return sx;
}

int CCarre::Getsy()
{
	return sy;
}

int CCarre::GetCote()
{
	return cote;
}

void CCarre::Deplacer(char direction, int saut)
{
    switch (direction) {
    case 'n':  // Direction Nord
        sy -= saut;
        break;
    case 's':  // Direction Sud
        sy += saut;
        break;
    case 'o':  // Direction Ouest
        sx -= saut;
        break;
    case 'e':  // Direction Est
        sx += saut;
        break;
    default:
        std::cout << "Direction invalide" << std::endl;
    }
}

void CCarre::Deplacer(int dx, int dy)
{
    sx += dx;  // Ajoute dx à la coordonnée x
    sy += dy;  // Ajoute dy à la coordonnée y
}
