#pragma once
#include "Persoana.h"
#include <string>
#include <vector>

class Profesor : public Persoana{
private:
    std::string Materie;
    int Vechime;

public:
    
    Profesor() : Persoana(), Materie(""),Vechime(0) {}

    Profesor(std::string nume, std::string prenume,  std::string email,int id, std::string materie,int vechime);

    std::string getNume() const;
    std::string getPrenume() const;
    std::string getMaterie() const;
    std::string getEmail() const;
    int getID() const;
    int getVechime() const;

   /* void adaugare_profesor(std::string nume, std::string prenume, std::string materie, std::string email, int id, int vechime);

    void afisare_informatii_profesor(int id);

    void cautare_profesor_dupa_materie(std::string materie);

    void afisare_profesori_peste_25_ani_vechime();*/

};
