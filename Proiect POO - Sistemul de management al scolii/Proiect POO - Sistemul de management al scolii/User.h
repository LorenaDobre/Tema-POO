#pragma once
#include <iostream>
#include <string>
using namespace std;

/// CLASA USER pentru gestionarea conturilor de utilizator
class User
{
private:
	string Username;
	string Password;
	bool IsLoggedIn;
public:
	User() : Username(""), Password(""), IsLoggedIn(false) {} 

	User(std::string username, std::string password, bool isLoggedIn);

	void signup(std::string nume, std::string parola);
	bool login(std::string nume, std::string parola);
	bool isLogged();

};
