#pragma once
#include <string>
#include <vector>
using namespace std;

class Absenta
{
private:
	std::string Materie;
	std::string Data;
public:
	Absenta() : Materie(""), Data("") {};
	Absenta(std::string materie, std::string data);

	string getMaterie() const;
	string getData() const;
};