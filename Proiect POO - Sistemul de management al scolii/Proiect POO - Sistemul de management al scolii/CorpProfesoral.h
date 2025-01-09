#pragma once
#include "Profesor.h"
#include <string>
#include <vector>
using namespace std;

class CorpProfesoral 
{
private:
	std::vector<Profesor> profesori; // Vectorul de profesori
public:
	CorpProfesoral();
	
	void adaugare_profesor(std::string nume, std::string prenume, std::string materie, std::string email, int id, int vechime);

	void afisare_informatii_profesor(int id);

	void cautare_profesor_dupa_materie(std::string materie); 

	void afisare_profesori_peste_25_ani_vechime(); 

};
