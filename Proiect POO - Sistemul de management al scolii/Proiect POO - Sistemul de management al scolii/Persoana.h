#pragma once
#include <string>
#include <vector>

class Persoana {
protected:
    std::string Nume;
    std::string Prenume;
    std::string Email;
    int ID;

public:
    
    Persoana() : Nume(""), Prenume(""), Email(""), ID(0) {}

    // Constructor cu parametrii
    Persoana(std::string nume, std::string prenume, std::string email, int id);

    // Gettere
    std::string getNume() const;
    std::string getPrenume() const;
    std::string getEmail() const;
    int getID() const;

    
};
