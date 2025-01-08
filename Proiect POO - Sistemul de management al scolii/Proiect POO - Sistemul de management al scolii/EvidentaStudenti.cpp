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

void EvidentaStudenti::afisare_medie_pentru_materie(std::string nume, std::string prenume, int id, std::string materie, int numar_ore) {
    bool gasit = false;

    for (size_t i = 0; i < studenti.size(); ++i) {
        Student& student = studenti[i];
        if (student.getNume() == nume && student.getPrenume() == prenume && student.getID() == id) {
            gasit = true;

            student.calculare_medie_materie(materie, numar_ore);
            break;
        }
    }

    if (!gasit) {
        cout << "Studentul nu a fost gasit!" << endl;
    }
}

