#pragma once
#include "Clasa.h"
#include "Profesor.h"
#include <string>
#include <vector>

class ClasaLiceu : public Clasa
{
private:
	std::string Nume_diriginte;

public:

	ClasaLiceu() : Clasa(), Nume_diriginte("") {}
	ClasaLiceu(std::string nume, std::string ciclu ,int nivel, std::string litera, int numar_elevi, std::string numr_diriginte);

	/*std::string getNume() const;
	std::string getCiclu() const;
	int getNivel() const;
	std::string getLitera() const;
	int getNumar_elevi() const;*/
	std::string getNume_diriginte() const;

	void afisare_informatii() override;
};
