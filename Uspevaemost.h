#pragma once
#include "Napravlenie.h"

class Uspevaemost
{
	friend void getbonus(Napravlenie na);
	friend Uspevaemost operator + (Uspevaemost u1, Uspevaemost u2);
public:
	Uspevaemost(int s, int m, int n, int h, Napravlenie nam);
	Uspevaemost(int allfields);
	Uspevaemost();
	void input();
	void output();
	int getstip();
	Uspevaemost& operator++(); //префиксный
	Uspevaemost operator++(int); //постфиксный
private:
	int srball; //средний балл студента по всем предметам 
	int minimum; //порог, меньше которого успеваемость считается низкой
	int normal; //порог, меньше которого успеваемость считается нормальной
	int high; //порог, меньше которого успеваемость считается высокой
	Napravlenie na;
};