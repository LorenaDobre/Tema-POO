#pragma once
#include "Student.h"
#include "Clasa.h"
#include "ClasaPrimar.h"
#include "ClasaGimnaziu.h"
#include "ClasaLiceu.h"
#include "EvidentaStudenti.h"
#include <string>
#include <vector>

class Scoala {
private:
	std::string Nume;
	std::string Adresa;
	std::string Director;
	int Numar_clase;
	int Numar_elevi;

	vector<Clasa*> Clase; // Vector de pointeri de tipul Clasa* pentru polimorfism

	EvidentaStudenti evidentaStudenti; // Obiectul care conține lista de studenți

public:

	Scoala() : Nume(""), Adresa(""), Director(""), Numar_clase(0), Numar_elevi(0) {}

	//Constructor cu parametrii
	Scoala(std::string nume, std::string adresa, std::string director, int numar_clase, int numar_elevi);

	// Gettere
	std::string getNume() const;
	std::string getAdresa() const;
	std::string getDirector() const;
	int getNumar_clase() const;
	int getNumar_elevi() const;

	void adauga_clasa(std::string nume, std::string ciclu, int nivel, std::string litera, int numar_elevi);
	void afisare_informatii_clasa(std::string nume);
	void afisare_studenti_din_clasa(std::string nume_clasa);
	//void adauga_student_in_clasa(std::string nume_student, std::string prenume_student, int id_student, std::string nume_clasa);

};

