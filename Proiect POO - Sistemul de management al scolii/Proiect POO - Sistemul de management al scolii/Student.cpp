#include "Student.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Student::Student(string nume, string prenume, string email, int id, string clasa, int varsta)
    : Persoana(nume, prenume, email, id)  // Apel constructorului clasei de bază
{
    this->Clasa = clasa;
    this->Varsta = varsta;
}

string Student::getNume() const {
    return Nume;
}
string Student::getPrenume() const {
    return Prenume;
}
string Student::getClasa() const {
    return Clasa;
}
string Student::getEmail() const {
    return Email;
}
int Student::getVarsta() const {
    return Varsta;
}
int Student::getID() const {
    return ID;
}

std::vector<Nota> Student::getNote() const {
    return note;
}

std::vector<Absenta> Student::getAbsente() const {
    return absente;
}

void Student::setClasa(std::string nume_clasa) {
    Clasa = nume_clasa;  // Setează numele clasei pentru elev
}

void Student::adauga_nota(Nota nota) {
    note.push_back(nota); // Adăugăm nota în vectorul note
}

void Student::adauga_absenta(Absenta absenta) {
    absente.push_back(absenta);  // Adăugăm absența în vectorul de absențe
}



         
