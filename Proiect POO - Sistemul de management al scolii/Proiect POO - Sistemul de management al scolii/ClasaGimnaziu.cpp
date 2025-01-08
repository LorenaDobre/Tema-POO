#include "ClasaGimnaziu.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

ClasaGimnaziu::ClasaGimnaziu(string nume, string ciclu, int nivel, string litera, int numar_elevi, string nume_diriginte)
    : Clasa(nume, ciclu, nivel, litera, numar_elevi)
{
    this->Nume_diriginte = nume_diriginte;

}

/*std::string ClasaGimnaziu::getNume() const {
    return Nume;
}

std::string ClasaGimnaziu::getCiclu() const {
    return Ciclu;
}

int ClasaGimnaziu::getNivel() const {
    return Nivel;
}

std::string ClasaGimnaziu::getLitera() const {
    return Litera;
}

int ClasaGimnaziu::getNumar_elevi() const {
    return Numar_elevi;
}
*/
std::string ClasaGimnaziu::getNume_diriginte() const {
    return Nume_diriginte;
}

void ClasaGimnaziu::afisare_informatii() {
    cout << "Clasa Gimnaziu: " << getNume() << endl;
    cout << "Ciclu: " << getCiclu() << endl;
    cout << "Nivel: " << getNivel() << endl;
    cout << "Litera: " << getLitera() << endl;
    cout << "Numar elevi: " << getNumar_elevi() << endl;
    cout << "Diriginte: " << Nume_diriginte << endl;
}