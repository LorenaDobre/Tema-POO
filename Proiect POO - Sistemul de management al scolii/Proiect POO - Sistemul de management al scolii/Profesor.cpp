#include "Profesor.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Profesor::Profesor(string nume, string prenume, string email,int id, string materie,int vechime)
    : Persoana(nume, prenume, email, id)
{
    this->Materie = materie;
    this->Vechime = vechime;
    
}

std::string Profesor::getNume() const {
    return Nume;
}

std::string Profesor::getPrenume() const {
    return Prenume;
}

std::string Profesor::getMaterie() const {
    return Materie;
}

std::string Profesor::getEmail() const {
    return Email;
}

int Profesor::getID() const {
    return ID;
}

int Profesor::getVechime() const {
    return Vechime;
}

