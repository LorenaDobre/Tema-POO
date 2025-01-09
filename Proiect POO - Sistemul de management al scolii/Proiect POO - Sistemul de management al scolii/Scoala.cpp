#include "Scoala.h"
#include "Clasa.h"
#include "ClasaPrimar.h"
#include "ClasaGimnaziu.h"
#include "ClasaLiceu.h"
#include "EvidentaStudenti.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Scoala::Scoala(string nume, string adresa, string director, int numar_clase, int numar_elevi)
{
    this->Nume = nume;
    this->Adresa = adresa;
    this->Director = director;
    this->Numar_clase = numar_clase;
    this->Numar_elevi = numar_elevi;
}

std::string Scoala::getNume() const {
    return Nume;
}

std::string Scoala::getAdresa() const {
    return Adresa;
}

std::string Scoala::getDirector() const {
    return Director;
}

int Scoala::getNumar_clase() const {
    return Numar_clase;
}

int Scoala::getNumar_elevi() const {
    return Numar_elevi;
}

void Scoala::adauga_clasa(string nume, string ciclu, int nivel, string litera, int numar_elevi) {
    if (ciclu == "primar") {
        ClasaPrimar* clasa = new ClasaPrimar(nume, ciclu, nivel, litera, numar_elevi, "");
        Clase.push_back(clasa);
        cout << "Clasa " << nume << " a fost adaugata la ciclul primar." << endl;
    }
    else if (ciclu == "gimnaziu") {
        ClasaGimnaziu* clasa = new ClasaGimnaziu(nume, ciclu, nivel, litera, numar_elevi, "");
        Clase.push_back(clasa);
        cout << "Clasa " << nume << " a fost adaugata la ciclul gimnazial." << endl;
    }
    else if (ciclu == "liceu") {
        ClasaLiceu* clasa = new ClasaLiceu(nume, ciclu, nivel, litera, numar_elevi, "");
        Clase.push_back(clasa);
        cout << "Clasa " << nume << " a fost adaugata la ciclul liceal." << endl;
    }
}

void Scoala::afisare_informatii_clasa(string nume) {
    for (size_t i = 0; i < Clase.size(); ++i) {
        if (Clase[i]->getNume() == nume) {
            Clase[i]->afisare_informatii();  // Apelează funcția specifică obiectului real
            return;
        }
    }
    cout << "Clasa " << nume << " nu a fost gasita." << endl;
}

void Scoala::afisare_studenti_din_clasa(std::string nume_clasa) {
    // Verificăm dacă există clasa cu numele nume_clasa
    bool clasa_gasita = false;
    for (size_t i = 0; i < Clase.size(); ++i) {
        if (Clase[i]->getNume() == nume_clasa) {
            clasa_gasita = true;
            break;
        }
    }

    if (!clasa_gasita) {
        cout << "Clasa " << nume_clasa << " nu exista in scoala.\n";
        return;
    }

    bool studenti_gasiti = false;
    std::vector<Student>& lista_studenti = evidentaStudenti.getStudenti(); // Obținem lista de studenți din evidență

    for (size_t i = 0; i < lista_studenti.size(); ++i) {
        if (lista_studenti[i].getClasa() == nume_clasa) {
            // Afișăm numele și prenumele studentului
            cout << "Student: " << lista_studenti[i].getNume() << " " << lista_studenti[i].getPrenume() << "\n";
            studenti_gasiti = true;
        }
    }

    if (!studenti_gasiti) {
        std::cout << "Nu exista studenti in clasa " << nume_clasa << ".\n";
    }
}

/*void Scoala::adauga_student_in_clasa(std::string nume_student, std::string prenume_student, int id_student, std::string nume_clasa) {
    bool clasa_gasita = false;

    // Căutăm clasa în lista de clase
    Clasa* clasa_selectata = nullptr;
    for (size_t i = 0; i < Clase.size(); ++i) {
        if (Clase[i]->getNume() == nume_clasa) {
            clasa_selectata = Clase[i];  // Am găsit clasa corespunzătoare
            clasa_gasita = true;
            break;
        }
    }

    if (!clasa_gasita) {
        cout << "Clasa " << nume_clasa << " nu exista in scoala.\n";
        return;
    }

    // Verificăm dacă mai sunt locuri disponibile în clasa respectivă
    if (clasa_selectata->getNumar_elevi() >= 25) {
        cout << "Clasa " << nume_clasa << " este plina. Nu se mai pot adauga studenti.\n";
        return;
    }

    // Căutăm studentul în evidența studenților
    std::vector<Student>& lista_studenti = evidentaStudenti.getStudenti(); // Obținem lista de studenți din evidență
    for (size_t i = 0; i < lista_studenti.size(); ++i) {
        if (lista_studenti[i].getNume() == nume_student && lista_studenti[i].getPrenume() == prenume_student && lista_studenti[i].getID() == id_student) {
            // Dacă studentul este găsit, îl adăugăm în clasa respectivă
            clasa_selectata->getStudenti().push_back(lista_studenti[i]);  // Folosim push_back pentru a adăuga studentul în lista clasei
            // Actualizăm numărul de elevi din clasă
            clasa_selectata->setNumar_elevi(clasa_selectata->getNumar_elevi() + 1);
            cout << "Studentul " << nume_student << " " << prenume_student << " a fost adaugat in clasa " << nume_clasa << ".\n";
            return;
        }
    }

    cout << "Studentul " << nume_student << " " << prenume_student << " cu ID-ul " << id_student << " nu a fost gasit.\n";
}
*/