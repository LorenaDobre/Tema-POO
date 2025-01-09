#include "Student.h"
#include "EvidentaStudenti.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::vector<Student>& EvidentaStudenti::getStudenti() {
    return studenti;
}

EvidentaStudenti::EvidentaStudenti() {}

void EvidentaStudenti::adaugare_student(string nume, string prenume, string clasa, string email, int varsta, int id) {
    Student student(nume, prenume, email, id, clasa, varsta);
    studenti.push_back(student);
    cout << "Studentul a fost adaugat cu succes!" << endl;
}

void EvidentaStudenti::afisare_informatii_student(int id) {
    bool gasit = false;

    for (size_t i = 0; i < studenti.size(); ++i) {
        const Student& student = studenti[i];
        if (student.getID() == id) {
            gasit = true;
            cout << "Nume: " << student.getNume() << endl;
            cout << "Prenume: " << student.getPrenume() << endl;
            cout << "Email: " << student.getEmail() << endl;
            cout << "Clasa: " << student.getClasa() << endl;
            cout << "Varsta: " << student.getVarsta() << endl;
            break;
        }
    }

    if (!gasit) {
        cout << "Studentul nu a fost gasit!" << endl;
    }
}

void EvidentaStudenti::adaugare_nota_student(string nume, string prenume, int id, int valoare, string materie, string data) {
    // Căutăm studentul în lista de studenți
    for (size_t i = 0; i < studenti.size(); ++i) {
        Student& student = studenti[i];
        if (student.getNume() == nume && student.getPrenume() == prenume && student.getID() == id) {
            // Creăm o instanță a clasei Nota
            Nota nota = { valoare, materie, data };
            student.adauga_nota(nota); // Adăugăm nota la vectorul de note al studentului
            cout << "Nota a fost adaugata pentru materia " << materie << endl;
            return;
        }
    }
    cout << "Studentul cu id-ul " << id << " nu a fost gasit.\n";
}

void EvidentaStudenti::calculare_medie_materie(string nume, string prenume, int id, string materie, int numar_ore)
{
    int suma_note = 0;
    int numar_note = 0;
    int medie;

    // Căutăm studentul în lista de studenți
    for (size_t i = 0; i < studenti.size(); ++i) {
        Student& student = studenti[i];
        if (student.getNume() == nume && student.getPrenume() == prenume && student.getID() == id) { 
            // Parcurgem vectorul de note al studentului
            for (int j = 0; j < student.getNote().size(); j++) {
                if (student.getNote()[j].getMaterie() == materie) {  // Verificăm dacă materia se potrivește
                    suma_note += student.getNote()[j].getValoare();  // Adăugăm nota la suma totală
                    numar_note++;  // Contorizăm numărul de note pentru materia respectivă
                }
            }

            // Dacă nu sunt note pentru materia respectivă
            if (numar_note == 0)
            {
                cout << "Studentul nu are nicio nota la materia " << materie << "!" << endl;
                return; 
            }

            // Verificăm dacă numărul de note este suficient pentru a calcula media
            if (numar_note >= numar_ore + 1)
            {
                medie = (double)suma_note / numar_note;  // Calculăm media
                if (medie % 10 >= 0.5) //Rotunjim media dacă este nevoie
                    medie = medie + 1;
                cout << "Media pentru materia " << materie << " este: " << medie << endl;
            }
            else {
                cout << "Nu sunt suficiente note pentru materia " << materie << ". Trebuie sa fie cel putin " << numar_ore + 1 << " note!" << endl;
            }

            return; 
        }
    }
    cout << "Studentul cu ID-ul " << id << " nu a fost gasit.\n";
}

void EvidentaStudenti::afisare_note_pentru_materie(std::string nume, std::string prenume, int id, std::string materie) {
    bool gasit1 = false;
    bool gasit2 = false;

    for (size_t i = 0; i < studenti.size(); ++i) {
        const Student& student = studenti[i];
        if (student.getNume() == nume && student.getPrenume() == prenume && student.getID() == id) {
            gasit1 = true;
            cout << "Notele elevului " << nume << " " << prenume << " la materia " << materie << ":" << endl;

            for (size_t j = 0; j < student.getNote().size(); ++j) {
                if (student.getNote()[j].getMaterie() == materie) {
                    gasit2 = true;
                    cout << "Nota: " << student.getNote()[j].getValoare()
                        << ", Data: " << student.getNote()[j].getData() << endl;
                }
            }

            if (!gasit2) {
                cout << "Nu exista note pentru materia " << materie << " la studentul " << nume << " " << prenume << endl;
            }

            break;
        }
    }

    if (!gasit1) {
        cout << "Studentul nu a fost gasit!" << endl;
    }
}

void EvidentaStudenti::afisare_toate_notele(std::string nume, std::string prenume, int id) {
    bool gasit = false;

    for (size_t i = 0; i < studenti.size(); ++i) {
        const Student& student = studenti[i];
        if (student.getNume() == nume && student.getPrenume() == prenume && student.getID() == id) {
            gasit = true;
            cout << "Notele elevului " << nume << " " << prenume << " sunt:" << endl;

            for (size_t j = 0; j < student.getNote().size(); ++j) {
                cout << "Materie: " << student.getNote()[j].getMaterie()
                    << ", Nota: " << student.getNote()[j].getValoare()
                    << ", Data: " << student.getNote()[j].getData() << endl;
            }

            break;
        }
    }

    if (!gasit) {
        cout << "Studentul nu a fost gasit!" << endl;
    }
}

void EvidentaStudenti::adaugare_absenta_student(string nume, string prenume, int id, string materie, string data) {
    // Căutăm studentul în lista de studenți
    for (size_t i = 0; i < studenti.size(); ++i) {
        Student& student = studenti[i];
        if (student.getNume() == nume && student.getPrenume() == prenume && student.getID() == id) {
            // Creăm o nouă absență
            Absenta absenta = { materie, data };

            // Adăugăm absența în vectorul de absențe al studentului
            student.adauga_absenta(absenta);

            cout << "Absenta a fost adaugata pentru materia " << materie << " la data " << data << "." << endl;
            return;
        }
    }
    cout << "Studentul cu ID-ul " << id << " nu a fost gasit.\n";
}

void EvidentaStudenti::afisare_toate_absentele(std::string nume, std::string prenume, int id) {
    bool gasit = false;

    for (size_t i = 0; i < studenti.size(); i++) {
        const Student& student = studenti[i];

        if (student.getNume() == nume && student.getPrenume() == prenume && student.getID() == id) {
            gasit = true;
            cout << "Absentele studentului " << nume << " " << prenume << " sunt :" << endl;

            for (size_t j = 0; j < student.getAbsente().size(); j++) {
                cout << "Materia: " << student.getAbsente()[j].getMaterie()
                    << " - Data: " << student.getAbsente()[j].getData() << endl;
            }
            break;
        }
    }

    if (!gasit) {
        cout << "Studentul nu a fost gasit!" << endl;
    }
}