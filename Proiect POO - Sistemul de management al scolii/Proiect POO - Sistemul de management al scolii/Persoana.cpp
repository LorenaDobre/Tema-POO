#include "Persoana.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

Persoana::Persoana(string nume, string prenume, string email, int id)
{
    this->Nume = nume;
    this->Prenume = prenume;
    this->Email = email;
    this->ID = id;
}

std::string Persoana::getNume() const {
    return Nume;
}

std::string Persoana::getPrenume() const {
    return Prenume;
}

std::string Persoana::getEmail() const {
    return Email;
}

int Persoana::getID() const {
    return ID;
}