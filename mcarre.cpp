#include <iostream>
#include "carre.h"
using namespace std;

int main() 
{
	CCarre a;
	a.Afficher();
	// Affectation des valeurs � l'objet
	a.Setsx(10);
	a.Setsy(20);
	a.Setcote(5);

	std::cout << "Coordonn�e x retourn�e par Getsx() : " << a.Getsx() << std::endl;  // Affiche 10
	std::cout << "Coordonn�e y retourn�e par Getsy() : " << a.Getsy() << std::endl;  // Affiche 20
	std::cout << "Longueur du c�t� retourn�e par GetCote() : " << a.GetCote() << std::endl;  // Affiche 5


	// D�placement du carr�
		a.Deplacer('n', 2);  
	cout << "Apr�s d�placement vers le nord (saut = 2) : x = " << a.Getsx() << ", y = " << a.Getsy() << endl;
	
	a.Deplacer(3, -4); 
	cout << "Avec surchage (dx, dy) x: " << a.Getsx() << ", y = " << a.Getsy() << endl;




}