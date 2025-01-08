#include "Nota.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Nota::Nota(int valoare, string materie, string data)
{
    this->Valoare = valoare;
    this->Materie = materie;
    this->Data = data;
}

int Nota::getValoare() const {
    return Valoare;
}
string Nota::getMaterie() const {
    return Materie;
}
string Nota::getData() const {
    return Data;
}
