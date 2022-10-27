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
	Uspevaemost& operator++(); //����������
	Uspevaemost operator++(int); //�����������
private:
	int srball; //������� ���� �������� �� ���� ��������� 
	int minimum; //�����, ������ �������� ������������ ��������� ������
	int normal; //�����, ������ �������� ������������ ��������� ����������
	int high; //�����, ������ �������� ������������ ��������� �������
	Napravlenie na;
};