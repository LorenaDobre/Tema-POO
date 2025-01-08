#pragma once
#include <string>
using namespace std;

class Nota
{
private:
    int Valoare;
    std::string Materie;
    std::string Data;
public:
    Nota() : Valoare(0), Materie(""), Data("") {};
    Nota(int valoare, std::string materie, std::string data);

    int getValoare() const;
    string getMaterie() const;
    string getData() const;
};
