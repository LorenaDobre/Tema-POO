#include "Invatator.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Invatator::Invatator(string nume, string prenume, string email, int id, int vechime)
    : Persoana(nume, prenume, email, id)
{ 
    this->Vechime = vechime;

}

std::string Invatator::getNume() const {
    return Nume;
}

std::string Invatator::getPrenume() const {
    return Prenume;
}

std::string Invatator::getEmail() const {
    return Email;
}

int Invatator::getID() const {
    return ID;
}

int Invatator::getVechime() const {
    return Vechime;
}