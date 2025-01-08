#pragma once
#include "Student.h"
#include <string>
#include <vector>

class Clasa
{
protected:
	std::string Nume;
	std::string Ciclu;
	int Nivel;
	std::string Litera;
	int Numar_elevi;

public:

	Clasa() : Nume(""), Ciclu(""), Nivel(0), Litera(""), Numar_elevi(0) {}

	//Constructor cu parametrii
	Clasa(std::string nume, std::string ciclu, int nivel, std::string litera, int numar_elevi);

	// Gettere
	std::string getNume() const;
	std::string getCiclu() const;
	int getNivel() const;
	std::string getLitera() const;
	int getNumar_elevi() const;

	// Setter pentru Numar_elevi
	void setNumar_elevi(int numar_elevi);

	// Funcție virtuală pură pentru afișarea informa țiilor
	virtual void afisare_informatii() = 0;
};