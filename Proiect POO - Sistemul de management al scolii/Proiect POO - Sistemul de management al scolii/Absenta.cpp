#include "Absenta.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Absenta::Absenta(string materie, string data)
{
    this->Materie = materie;
    this->Data = data;
}

string Absenta::getMaterie() const {
    return Materie;
}
string Absenta::getData() const {
    return Data;
}