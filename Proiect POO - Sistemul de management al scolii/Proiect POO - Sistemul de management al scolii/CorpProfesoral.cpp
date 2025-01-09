#include "Profesor.h"
#include "CorpProfesoral.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

CorpProfesoral::CorpProfesoral() {}

void CorpProfesoral::adaugare_profesor(string nume, string prenume, string materie, string email, int id, int vechime) {
    // Creăm un obiect Profesor 
    Profesor profesor(nume, prenume, email, id,materie, vechime);

    // Adăugăm profesorul în vectorul de profesori
    profesori.push_back(profesor);

    cout << "Profesorul a fost adaugat cu succes!" << endl;
}

void CorpProfesoral::afisare_informatii_profesor(int id) {
    bool gasit = false;

    // Parcurgem vectorul de profesori
    for (int i = 0; i < profesori.size(); i++) {
        if (profesori[i].getID() == id) { // Verificăm ID-ul profesorului
            gasit = true;
            // Afișăm informațiile profesorului găsit
            cout << "Nume: " << profesori[i].getNume() << endl;
            cout << "Prenume: " << profesori[i].getPrenume() << endl;
            cout << "Materie: " << profesori[i].getMaterie() << endl;
            cout << "Email: " << profesori[i].getEmail() << endl;
            cout << "Vechime: " << profesori[i].getVechime() << endl;
            break; 
        }
    }

    // Dacă nu am găsit profesorul
    if (!gasit) {
        cout << "Nu exista niciun profesor cu ID-ul " << id << "." << endl;
    }
}

void CorpProfesoral::cautare_profesor_dupa_materie(string materie) {
    bool gasit = false;

    // Parcurgem vectorul de profesori
    for (int i = 0; i < profesori.size(); i++) {
        if (profesori[i].getMaterie() == materie) {  // Dacă materia se potrivește
            if (!gasit) {  
                cout << "Profesorii care predau " << materie << " sunt:" << endl;
                gasit = true;
            }
            cout << profesori[i].getNume() << " " << profesori[i].getPrenume() << endl;
        }
    }

    if (!gasit) {
        cout << "Nu s-au gasit profesori pentru materia " << materie << "." << endl;
    }
}

void CorpProfesoral::afisare_profesori_peste_25_ani_vechime() {
    bool gasit = false;

    // Parcurgem vectorul de profesori
    for (int i = 0; i < profesori.size(); i++) {
        // Dacă vechimea profesorului este mai mare sau egal cu 25
        if (profesori[i].getVechime() >= 25) {
            if (!gasit) {  
                cout << "Profesorii cu peste 25 de ani de vechime sunt:" << endl;
                gasit = true;
            }
            cout << profesori[i].getNume() << " " << profesori[i].getPrenume() << endl;
        }
    }

    // Dacă nu am găsit niciun profesor cu peste 25 de ani de vechime
    if (!gasit) {
        cout << "Nu s-au gasit profesori cu cel putin 25 de ani de vechime." << endl;
    }
}
