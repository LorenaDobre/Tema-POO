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
#include "Scoala.h"
#include "User.h"

//using namespace std;

int main()
{
    //User utilizator; // Creeaza un utilizator implicit
    string nume, parola;
    int option;

    CorpProfesoral corpProfesoral;
    EvidentaStudenti evidentaStudenti;
    Scoala scoala;

    /*cout << "Conectare la aplicatie:" << endl;
    cout << "Username: ";
    cin >> nume;
    cout << "Password: ";
    cin >> parola;
    */
    /*if (!utilizator.login(nume, parola)) {
        cout << "Acces refuzat! Inchiderea aplicatiei." << endl;
        return 1; // Iese din aplicatie
    }*/

    int optiune;
    do {
        // Meniul principal
        cout << "\nMeniu:\n";
        cout << "1. Adauga student\n";
        cout << "2. Afiseaza informatii student\n";
        cout << "3. Adauga nota student\n";
        cout << "4. Calculeaza medie materie\n";
        cout << "5. Afiseaza note pentru o materie\n";
        cout << "6. Afiseaza toate notele studentului\n";
        cout << "7. Adauga absenta student\n";
        cout << "8. Afiseaza toate absentele studentului\n";
        cout << "9. Adauga profesor\n";
        cout << "10. Afiseaza informatii profesor\n";
        cout << "11. Cauta profesor dupa materie\n";
        cout << "12. Afiseaza profesori cu vechime peste 25 de ani\n";
        cout << "13. Adauga o clasa\n";
        cout << "14. Afiseaza informatii clasa\n";
        cout << "15. Afiseaza studentii din clasa\n";
        cout << "16. Iesire\n";
        cout << "Alege o optiune: ";
        cin >> option;

        switch (option) {
        case 1: {
            string nume, prenume, clasa, email;
            int id, varsta;
            cout << "Introduceti nume student: ";
            cin >> nume;
            cout << "Introduceti prenume student: ";
            cin >> prenume;
            cout << "Introduceti clasa student: ";
            cin >> clasa;
            cout << "Introduceti email student: ";
            cin >> email;
            cout << "Introduceti ID student: ";
            cin >> id;
            cout << "Introduceti varsta student: ";
            cin >> varsta;

            evidentaStudenti.adaugare_student(nume, prenume, clasa, email, varsta, id);
            break;
        }
        case 2: {
            int id;
            cout << "Introduceti ID student: ";
            cin >> id;
            evidentaStudenti.afisare_informatii_student(id);
            break;
        }
        case 3: {
            int id, valoare;
            string nume, prenume, materie, data;

            cout << "Introduceti numele studentului: ";
            cin >> nume;
            cout << "Introduceti prenumele studentului: ";
            cin >> prenume;
            cout << "Introduceti ID-ul studentului: ";
            cin >> id;
            cout << "Introduceti nota: ";
            cin >> valoare;
            cout << "Introduceti materie: ";
            cin >> materie;
            cout << "Introduceti data: ";
            cin >> data;

            evidentaStudenti.adaugare_nota_student(nume, prenume, id, valoare, materie, data);
            break;
        }
        case 4: {
            string nume, prenume, materie;
            int id, numar_ore;
            cout << "Introduceti numele studentului: ";
            cin >> nume;
            cout << "Introduceti prenumele studentului: ";
            cin >> prenume;
            cout << "Introduceti ID-ul studentului: ";
            cin >> id;
            cout << "Introduceti materie: ";
            cin >> materie;
            cout << "Introduceti numar ore: ";
            cin >> numar_ore;

            evidentaStudenti.calculare_medie_materie(nume, prenume, id, materie, numar_ore);
            break;
        }
        case 5: {
            string nume, prenume, materie;
            int id;
            cout << "Introduceti numele studentului: ";
            cin >> nume;
            cout << "Introduceti prenumele studentului: ";
            cin >> prenume;
            cout << "Introduceti ID-ul studentului: ";
            cin >> id;
            cout << "Introduceti materie: ";
            cin >> materie;

            evidentaStudenti.afisare_note_pentru_materie(nume, prenume, id, materie);
            break;
        }

        case 6: {
            string nume, prenume;
            int id;
            cout << "Introduceti nume student: ";
            cin >> nume;
            cout << "Introduceti prenume student: ";
            cin >> prenume;
            cout << "Introduceti ID student: ";
            cin >> id;

            evidentaStudenti.afisare_toate_notele(nume, prenume, id);
            break;
        }
        case 7: {
            int id;
            string nume, prenume, materie, data;
            cout << "Introduceti nume student: ";
            cin >> nume;
            cout << "Introduceti prenume student: ";
            cin >> prenume;
            cout << "Introduceti ID student: ";
            cin >> id;
            cout << "Introduceti materie: ";
            cin >> materie;
            cout << "Introduceti data : ";
            cin >> data;

            evidentaStudenti.adaugare_absenta_student(nume, prenume, id,materie, data);
            break;
        }
        case 8: {
            string nume, prenume;
            int id;
            cout << "Introduceti nume student: ";
            cin >> nume;
            cout << "Introduceti prenume student: ";
            cin >> prenume;
            cout << "Introduceti ID student: ";
            cin >> id;

            evidentaStudenti.afisare_toate_absentele(nume, prenume, id);
            break;
        }
        case 9: {
            string nume, prenume, materie, email;
            int id, vechime;
            cout << "Introduceti nume profesor: ";
            cin >> nume;
            cout << "Introduceti prenume profesor: ";
            cin >> prenume;
            cout << "Introduceti materie profesor: ";
            cin >> materie;
            cout << "Introduceti email profesor: ";
            cin >> email;
            cout << "Introduceti ID profesor: ";
            cin >> id;
            cout << "Introduceti vechime profesor: ";
            cin >> vechime;

            corpProfesoral.adaugare_profesor(nume, prenume, materie, email, id, vechime);
            break;
        }
        case 10: {
            int id;
            cout << "Introduceti ID profesor: ";
            cin >> id;
            corpProfesoral.afisare_informatii_profesor(id);
            break;
        }
        case 11: {
            string materie;
            cout << "Introduceti materie: ";
            cin >> materie;
            corpProfesoral.cautare_profesor_dupa_materie(materie);
            break;
        }
        case 12: {
            corpProfesoral.afisare_profesori_peste_25_ani_vechime();
            break;
        }
        case 13: {
            // Opțiune pentru adăugarea unei clase
            string nume, ciclu, litera;
            int nivel, numar_elevi;
            cout << "Introduceti numele clasei: ";
            cin >> nume;
            cout << "Introduceti ciclul : ";
            cin >> ciclu;
            cout << "Introduceti nivelul clasei (ex: 5, 10): ";
            cin >> nivel;
            cout << "Introduceti litera clasei: ";
            cin >> litera;
            cout << "Introduceti numarul de elevi: ";
            cin >> numar_elevi;

            scoala.adauga_clasa(nume, ciclu, nivel, litera, numar_elevi);
            break;
        }
        case 14: {
            // Opțiune pentru afișarea informațiilor unei clase
            string nume_clasa;
            cout << "Introduceti numele clasei: ";
            cin >> nume_clasa;

            scoala.afisare_informatii_clasa(nume_clasa);
            break;
        }
        case 15: {
            // Opțiune pentru afișarea listei de studenți dintr-o clasă
            string nume_clasa;
            cout << "Introduceti numele clasei: ";
            cin >> nume_clasa;

            scoala.afisare_studenti_din_clasa(nume_clasa);
            break;
        }
        case 16:
            cout << "Iesire din program.\n";
            break;
        default:
            cout << "Optiune invalida! Reincercati.\n";
        }
    } while (option != 0); // Bucla continua pana cand utilizatorul alege optiunea de iesire

    return 0;
}