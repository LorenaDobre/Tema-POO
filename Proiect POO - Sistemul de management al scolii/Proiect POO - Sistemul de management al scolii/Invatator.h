#pragma once
#include "Persoana.h"
#include <string>
#include <vector>

class Invatator : public Persoana
{
private:
	int Vechime;
public:
	Invatator() : Persoana(),  Vechime(0) {}
	Invatator(std::string nume, std::string prenume, std::string email, int id, int vechime);

    std::string getNume() const;
    std::string getPrenume() const;
    std::string getEmail() const;
    int getID() const;
    int getVechime() const;


};