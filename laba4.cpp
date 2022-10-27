#include "Student.h"
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	byte years = 10;
	byte akadem = 1;
	Experience exp1;
	Experience exp2(years);
	Experience exp3(years, akadem);
	exp1.input();
	cout << "\n" << "exp1:" << endl;
	exp1.output();
	cout << "\n" << "exp2:" << endl;
	exp2.output();
	cout << "\n" << "exp3:" << endl;
	exp3.output();
	string str = "Приборостроение";
	int elit = 1;
	int form = 2;
	Napravlenie nap1;
	Napravlenie nap2(elit);
	Napravlenie nap3(str, elit, form);
	nap1.input();
	while (getchar() != '\n');
	cout << "\n" << "nap1:" << endl;
	nap1.output();
	cout << "\n" << "nap2:" << endl;
	nap2.output();
	cout << "\n" << "nap3:" << endl;
	nap3.output();
	int bal1 = 45, bal2 = 20;
	Uspevaemost us1;
	Uspevaemost us2(bal1);
	Uspevaemost us3(bal2, 30, 70, 100, nap1);
	us1.input();
	cout << "\n" << "us1:" << endl;
	us1.output();
	cout << "\n" << "us2:" << endl;
	us2.output();
	cout << "\n" << "us3:" << endl;
	us3.output();
	Student st1;
	Student st2(10);
	Student st3(exp1, nap1, us1);
	Student* st4;
	Student* st5 = new Student;
	st4 = st2.get();
	*st5 = st3.getadress();
	string napt1 = "Экономист";
	string napt2 = "Экономист банка";
	string napt3 = "Экономист экономики";
	Napravlenie n1(napt1, elit, form);
	Napravlenie n2(napt2, elit, form);
	Napravlenie n3(napt3, elit, form);
	Student s1(exp1, n1, us1);
	Student s2(exp1, n2, us1);
	Student s3(exp1, n3, us1);
	s1.editnazvanie("Экономист", "Старший");
	s2.editnazvanie("Экономист", "Старший");
	s3.editnazvanie("Экономист", "Старший");
	s1.output();
	s2.output();
	s3.output();
	st1.input();
	cout << "\n" << "st1:" << endl;
	st1.output();
	cout << "\n" << "st2:" << endl;
	st2.output();
	cout << "\n" << "st3:" << endl;
	st3.output();
	st4->editnazvanie("Менеджер", "Младший");
	cout << "\n" << "st4:" << endl;
	st4->output();
	st5->editnazvanie("Менеджер", "Старший");
	cout << "\n" << "st5:" << endl;
	st5->output();
	s1.printcounter();
}




