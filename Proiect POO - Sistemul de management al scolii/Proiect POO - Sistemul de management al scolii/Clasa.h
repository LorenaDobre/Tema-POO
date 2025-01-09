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
	std::vector<Student> Studenti; // Vectorul de studenti

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

	std::vector<Student>& getStudenti();

	// Setter pentru Numar_elevi
	void setNumar_elevi(int numar_elevi);

	// Funcție virtuală pură pentru afișarea informațiilor
	virtual void afisare_informatii() = 0;
};