#pragma once
#include "Clasa.h"
#include "Invatator.h"
#include <string>
#include <vector>

class ClasaPrimar : public Clasa
{
private:
	std::string Nume_invatator;

public:

	ClasaPrimar() : Clasa(), Nume_invatator("") {}
	ClasaPrimar(std::string nume, std::string ciclu, int nivel, std::string litera, int numar_elevi, std::string nume_invatator);

	std::string getNume_invatator() const;

	void afisare_informatii() override;
};