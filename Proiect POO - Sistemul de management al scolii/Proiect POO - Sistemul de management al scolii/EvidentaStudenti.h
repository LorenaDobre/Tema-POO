#pragma once
#include "Student.h"
#include <string>
#include <vector>
using namespace std;

class EvidentaStudenti 
{
private:
	std::vector<Student> studenti; // Vectorul de studenti

public:

	std::vector<Student>& getStudenti();

	EvidentaStudenti();

	void adaugare_student(std::string nume, std::string prenume, std::string clasa, std::string email, int varsta, int id);

	void afisare_informatii_student(int id);

	void afisare_note_pentru_materie(std::string nume, std::string prenume, int id, std::string materie);

	void afisare_toate_notele(std::string nume, std::string prenume, int id);

	void afisare_toate_absentele(std::string nume, std::string prenume, int id);

	void afisare_medie_pentru_materie(std::string nume, std::string prenume, int id, std::string materie, int numar_ore);
};