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

    void adauga_nota(Nota nota);
    void adauga_absenta(Absenta absenta);

    void setClasa(std::string nume_clasa);

    

   
};

