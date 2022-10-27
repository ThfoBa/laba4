#pragma once
#include <string>
using namespace std;

class Napravlenie
{
	friend void getbonus(Napravlenie na);
	friend Napravlenie operator + (Napravlenie n1, Napravlenie n2);
public:
	Napravlenie(string n, int e, int f);
	Napravlenie(int allfields);
	Napravlenie();
	void input();
	void output();
	void set(Napravlenie n);
	void editnazvanie(string nazvanie, string add);
	Napravlenie& operator++(); //префиксный
	Napravlenie operator++(int); //постфиксный
private:
	string nazvanie; //название направления
	int formstudy; //форма обучения (платка/бюджет)
	int elite; //класс престижности направления (типа обычное и крутое)

};