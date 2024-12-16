#pragma once

class CCarre {

public:
	void Setsx(int sx1);
	void Setsy(int sy1);
	void Setcote(int cote1);
	void Afficher();
	int Getsx();
	int Getsy();
	int GetCote(); // retourne la cote
	void Deplacer(char direction, int saut);
	void Deplacer(int dx, int dy);          // Surcharge

private:
	int sx;
	int sy;
	int cote;

};


