#include "Clasa.h"
#include "Student.h"
#include "EvidentaStudenti.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


Clasa::Clasa(string nume, string ciclu, int nivel, string litera, int numar_elevi)
{
    this->Nume = nume;
    this->Ciclu = ciclu;
    this->Nivel = nivel;
    this->Litera = litera;
    this->Numar_elevi = numar_elevi;
}

std::string Clasa::getNume() const {
    return Nume;
}

std::string Clasa::getCiclu() const {
    return Ciclu;
}

int Clasa::getNivel() const {
    return Nivel;
}

std::string Clasa::getLitera() const {
    return Litera;
}

int Clasa::getNumar_elevi() const {
    return Numar_elevi;
}


void Clasa::setNumar_elevi(int numar_elevi) {
    Numar_elevi = numar_elevi;
}

std::vector<Student>& Clasa::getStudenti() {
    return Studenti;
}