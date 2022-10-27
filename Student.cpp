#include "Student.h"
#include <string>
#include <stdio.h>
#include <iostream>

int Student::counter = 0;
//конструктор класса со всеми параметрами
Student::Student(Experience e, Napravlenie n, Uspevaemost u) {
	counter++;
	id = counter;
	exp = e;
	nap = n;
	usp = u;
}

//конструктор класса с одним параметром
Student::Student(int allfields) {
	counter++;
	id = counter;
	Experience e(allfields);
	Napravlenie n(allfields);
	Uspevaemost u(allfields);
	exp = e;
	nap = n;
	usp = u;
	
	
}

//конструктор класса без параметров
Student::Student() {
	counter++;
	id = counter;
	Experience e;
	Uspevaemost u;
	Napravlenie n;
	exp = e;
	nap = n;
	usp = u;
}

//метод вывода 
void Student::output() {
	cout << "ID: " << this->id << endl;
	exp.output();
	nap.output();
	usp.output();
	getbonus(nap);
	cout << "\nСтипендия: " << usp.getstip() << endl;
}

//метод ввода 
void Student::input() {
	exp.input();
	nap.input();
	while (getchar() != '\n');
	usp.input();
}

//метод вывода счетчика количества студентов
void Student::printcounter() {
	cout << "Количество студентов: " << counter << endl;
}

//метод, возвращающий значение через указатель
Student* Student::get() {
	return this;
}

//метод, возвращающий значение через ссылку
Student& Student::getadress() {
	return *this;
}

//метод обращения к методу внутреннего класса
void Student::editnazvanie(string nazvanie, string add) {
	nap.editnazvanie(nazvanie, add);
}

//перегрузка оператора +
Student operator + (Student e1, Student e2) {
	e1.exp = e1.exp + e2.exp;
	e1.nap = e1.nap + e2.nap;
	e1.usp = e1.usp + e2.usp;
	return e1;
}

//перегрузка оператора ++ префиксный
Student& Student::operator++() {
	this->exp++;
	this->nap++;
	this->usp++;
	return *this;
}

//перегрузка оператора ++ постфиксный
Student Student::operator++(int) {
	Student temp = *this;
	++* this;
	return temp;
}