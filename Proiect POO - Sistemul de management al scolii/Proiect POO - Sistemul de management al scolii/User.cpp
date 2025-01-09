#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User::User(string username, string password, bool isLoggedIn)
{
	this->Username = username;
	this->Password = password;
	this->IsLoggedIn = false;
}

void User::signup(string nume, string parola)
{

}
bool User::login(string nume, string parola)
{
	if (Username == nume && Password == parola)
	{
		IsLoggedIn = true;
		cout << "Conectare reusita!\n";
		return true;
	}
	else
	{
		cout << "EROARE! NUME SAU PAROLA GRESITA!\n";
		return false;
	}
}

bool User::isLogged()
{ 
	return IsLoggedIn; 
}