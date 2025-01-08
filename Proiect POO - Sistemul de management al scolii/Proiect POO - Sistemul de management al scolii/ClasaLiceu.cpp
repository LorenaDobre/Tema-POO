#include "ClasaLiceu.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

ClasaLiceu::ClasaLiceu(string nume, string ciclu, int nivel, string litera, int numar_elevi, string nume_diriginte)
    : Clasa(nume, ciclu, nivel, litera, numar_elevi)
{
    this->Nume_diriginte = nume_diriginte;

}

/*std::string ClasaLiceu::getNume() const {
    return Nume;
}

std::string ClasaLiceu::getCiclu() const {
    return Ciclu;
}

int ClasaLiceu::getNivel() const {
    return Nivel;
}

std::string ClasaLiceu::getLitera() const {
    return Litera;
}

int ClasaLiceu::getNumar_elevi() const {
    return Numar_elevi;
}
*/
std::string ClasaLiceu::getNume_diriginte() const {
    return Nume_diriginte;
}

void ClasaLiceu::afisare_informatii() {
    cout << "Clasa Liceu: " << getNume() << endl;
    cout << "Ciclu: " << getCiclu() << endl;
    cout << "Nivel: " << getNivel() << endl;
    cout << "Litera: " << getLitera() << endl;
    cout << "Numar elevi: " << getNumar_elevi() << endl;
    cout << "Diriginte: " << Nume_diriginte << endl;
}