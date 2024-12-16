#include <iostream>
#include "carre.h"
using namespace std;

int main() 
{
	CCarre a;
	a.Afficher();
	// Affectation des valeurs à l'objet
	a.Setsx(10);
	a.Setsy(20);
	a.Setcote(5);

	std::cout << "Coordonnée x retournée par Getsx() : " << a.Getsx() << std::endl;  // Affiche 10
	std::cout << "Coordonnée y retournée par Getsy() : " << a.Getsy() << std::endl;  // Affiche 20
	std::cout << "Longueur du côté retournée par GetCote() : " << a.GetCote() << std::endl;  // Affiche 5


	// Déplacement du carré
		a.Deplacer('n', 2);  
	cout << "Après déplacement vers le nord (saut = 2) : x = " << a.Getsx() << ", y = " << a.Getsy() << endl;
	
	a.Deplacer(3, -4); 
	cout << "Avec surchage (dx, dy) x: " << a.Getsx() << ", y = " << a.Getsy() << endl;




}