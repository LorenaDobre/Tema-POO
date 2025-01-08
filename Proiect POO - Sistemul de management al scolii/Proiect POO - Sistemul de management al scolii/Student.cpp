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

void Student::adaugare_nota_student(int valoare, string materie, string data)
{
    Nota nota = { valoare, materie, data }; // Creăm o instanță a clasei Nota
    note.push_back(nota); // Adăugăm nota la vectorul note al acestui student
    cout << "Nota a fost adaugata pentru materia " << materie << endl;
}

void Student::calculare_medie_materie(string materie, int numar_ore)
{
    int suma_note = 0;
    int numar_note = 0;
    double medie;

    // Parcurgem vectorul de note al studentului folosind un for simplu
    for (int i = 0; i < note.size(); i++) {
        if (note[i].getMaterie() == materie) {  // Verificăm dacă materia se potrivește
            suma_note += note[i].getValoare();  // Adăugăm nota la suma totală
            numar_note++;  // Contorizăm numărul de note pentru materia respectivă
        }
    }

    if (numar_note == 0)
    {
        cout << "Studentul nu are nicio nota la materia " << materie << "!" << endl;
        return; // Ieșim din funcție
    }

    // Verificăm dacă numărul de note este suficient pentru a calcula media
    if (numar_note >= numar_ore + 1) 
    {
        if (suma_note % numar_note == 0)
            medie = suma_note / numar_note; // Calculăm media
        else
        {
            if (suma_note % numar_note >= 0.5)
                medie = suma_note / numar_note + 1;
        }
        cout << "Media pentru materia " << materie << " este: " << medie << endl;
    }
    else {
        cout << "Nu sunt suficiente note pentru materia " << materie << ". Trebuie sa fie cel putin " << numar_ore + 1 << " note!" << endl;
    }

}


void Student::adaugare_absenta_student(string materie, string data) 
{
    // Creăm o nouă absență
    Absenta absenta = { materie, data };

    // Adăugăm absența în vectorul de absențe al studentului
    absente.push_back(absenta);

    // Afișăm un mesaj de confirmare
    cout << "Absenta a fost adaugata pentru materia " << materie << " la data " << data << "." << endl;
}

         
