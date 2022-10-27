#pragma once
#include "Experience.h"
#include "Uspevaemost.h"
#include "Napravlenie.h"
using namespace std;

class Student {
	friend void getbonus(Napravlenie na);
	friend Student operator + (Student e1, Student e2);
public:
	Student(Experience e, Napravlenie n, Uspevaemost u);
	Student(int allfields);
	Student();
	void output();
	void input();
	static void printcounter();
	Student* get();
	Student& getadress();
	void editnazvanie(string nazvanie, string add);
	Student& operator++(); //префиксный
	Student operator++(int); //постфиксный
private:
	static int counter;
	int id; //индивидуальный номер
	Experience exp; //количество лет обучения в вузе
	Napravlenie nap; //название направления
	Uspevaemost usp; //успеваемость студента
};