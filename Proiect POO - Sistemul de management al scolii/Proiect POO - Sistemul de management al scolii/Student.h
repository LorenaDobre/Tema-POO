#pragma once
#include "Persoana.h"
#include "Nota.h"
#include "Absenta.h"
#include <string>
#include <vector>


class Student : public Persoana {
private:
    std::string Clasa;
    int Varsta;
    std::vector<Nota> note;
    std::vector<Absenta> absente;

public:
    // Constructor implicit
    Student() : Persoana(), Clasa(""), Varsta(0) {}

    Student(std::string nume, std::string prenume, std::string email, int id, std::string clasa, int varsta);

    std::string getNume() const;
    std::string getPrenume() const;
    std::string getEmail() const;
    int getID() const;
    std::string getClasa() const;
    int getVarsta() const;
    

    // Funcțiile de acces pentru note și absențe
    std::vector<Nota> getNote() const;
    std::vector<Absenta> getAbsente() const;

    void setClasa(std::string nume_clasa);


    void adaugare_nota_student(int valoare, std::string materie, std::string data);

    void calculare_medie_materie(std::string materie, int numar_ore);

    void adaugare_absenta_student(std::string materie, std::string data);

   
};

