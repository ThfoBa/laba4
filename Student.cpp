#include "Student.h"
#include <string>
#include <stdio.h>
#include <iostream>

int Student::counter = 0;
//����������� ������ �� ����� �����������
Student::Student(Experience e, Napravlenie n, Uspevaemost u) {
	counter++;
	id = counter;
	exp = e;
	nap = n;
	usp = u;
}

//����������� ������ � ����� ����������
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

//����������� ������ ��� ����������
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

//����� ������ 
void Student::output() {
	cout << "ID: " << this->id << endl;
	exp.output();
	nap.output();
	usp.output();
	getbonus(nap);
	cout << "\n���������: " << usp.getstip() << endl;
}

//����� ����� 
void Student::input() {
	exp.input();
	nap.input();
	while (getchar() != '\n');
	usp.input();
}

//����� ������ �������� ���������� ���������
void Student::printcounter() {
	cout << "���������� ���������: " << counter << endl;
}

//�����, ������������ �������� ����� ���������
Student* Student::get() {
	return this;
}

//�����, ������������ �������� ����� ������
Student& Student::getadress() {
	return *this;
}

//����� ��������� � ������ ����������� ������
void Student::editnazvanie(string nazvanie, string add) {
	nap.editnazvanie(nazvanie, add);
}

//���������� ��������� +
Student operator + (Student e1, Student e2) {
	e1.exp = e1.exp + e2.exp;
	e1.nap = e1.nap + e2.nap;
	e1.usp = e1.usp + e2.usp;
	return e1;
}

//���������� ��������� ++ ����������
Student& Student::operator++() {
	this->exp++;
	this->nap++;
	this->usp++;
	return *this;
}

//���������� ��������� ++ �����������
Student Student::operator++(int) {
	Student temp = *this;
	++* this;
	return temp;
}