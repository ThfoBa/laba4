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
	Napravlenie& operator++(); //����������
	Napravlenie operator++(int); //�����������
private:
	string nazvanie; //�������� �����������
	int formstudy; //����� �������� (������/������)
	int elite; //����� ������������ ����������� (���� ������� � ������)

};