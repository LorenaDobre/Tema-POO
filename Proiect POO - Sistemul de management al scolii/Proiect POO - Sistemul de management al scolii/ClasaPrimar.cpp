#include "ClasaPrimar.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

ClasaPrimar::ClasaPrimar(string nume, string ciclu, int nivel, string litera, int numar_elevi,string nume_invatator)
    : Clasa(nume, ciclu, nivel, litera, numar_elevi)
{
    this->Nume_invatator = nume_invatator;
   
}

/*std::string ClasaPrimar::getNume() const {
    return Nume;
}

std::string ClasaPrimar::getCiclu() const {
    return Ciclu;
}

int ClasaPrimar::getNivel() const {
    return Nivel;
}

std::string ClasaPrimar::getLitera() const {
    return Litera;
}

int ClasaPrimar::getNumar_elevi() const {
    return Numar_elevi;
}*/

std::string ClasaPrimar::getNume_invatator() const {
    return Nume_invatator;
}

void ClasaPrimar::afisare_informatii() {
    cout << "Clasa Primar: " << getNume() << endl;
    cout << "Ciclu: " << getCiclu() << endl;
    cout << "Nivel: " << getNivel() << endl;
    cout << "Litera: " << getLitera() << endl;
    cout << "Numar elevi: " << getNumar_elevi() << endl;
    cout << "Invatator: " << Nume_invatator << endl;
}