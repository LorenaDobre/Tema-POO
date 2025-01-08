#include <iostream>
#include <string>
#include "Student.h"
#include "Nota.h"
#include "Absenta.h"
#include "EvidentaStudenti.h"
#include "CorpProfesoral.h"
#include "ClasaPrimar.h"
#include "ClasaGimnaziu.h"
#include "ClasaLiceu.h"

//using namespace std;

int main() {
  
    EvidentaStudenti evidenta;

    // Crearea unui student
    evidenta.adaugare_student("Popescu", "Ion", "12A", "ion.popescu@yahoo.com", 16, 1);

    // Afișarea informațiilor studentului
    evidenta.afisare_informatii_student(1);


    // Afișarea tuturor notelor și absențelor
    evidenta.afisare_toate_notele("Popescu", "Ion", 1);
    evidenta.afisare_toate_absentele("Popescu", "Ion", 1);

    Clasa* clasaPrimar = new ClasaPrimar("Clasa 1A", "Primar", 1, "A", 25, "Ion Popescu");
    clasaPrimar->afisare_informatii();  // Va apela afisare_informatii() din ClasaPrimar

    Clasa* clasaGimnaziu = new ClasaGimnaziu("Clasa a 5-a", "Gimnaziu", 5, "B", 30, "Maria Ionescu");
    clasaGimnaziu->afisare_informatii();  // Va apela afisare_informatii() din ClasaGimnaziu
    return 0;
}
