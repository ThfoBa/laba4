#include "Uspevaemost.h"
#include <iostream>
using namespace std;

//����������� ������ �� ����� �����������
Uspevaemost::Uspevaemost(int srball, int minimum, int normal, int high, Napravlenie nam) {
	if ((srball >= 0)&&(srball <= 100))
		this->srball = srball;
	else {
		cout << "������� ������������ �������� srball." << endl;
		this->srball = 0;
	}
	if ((minimum > 0) && (minimum < 100))
		this->minimum = minimum;
	else {
		cout << "������� ������������ �������� minimum." << endl;
		this->minimum = 0;
	}
	if ((normal > 0) && (normal < 100)&&(normal > minimum))
		this->normal = normal;
	else {
		cout << "������� ������������ �������� normal." << endl;
		this->normal = 0;
	}
	if ((high > 0) && (high <= 100) && (high > normal))
		this->high = high;
	else {
		cout << "������� ������������ �������� high." << endl;
		this->high = 0;
	}
	na = nam;
}

//����������� ������ � ����� ����������
Uspevaemost::Uspevaemost(int allfields) {
	
	srball = allfields;
	minimum = 30;
	normal = 70;
	high = 100;
	na = *new Napravlenie((int)allfields);
	
	
}

//����������� ������ ��� ����������
Uspevaemost::Uspevaemost() {
	srball = 0;
	minimum = 30;
	normal = 70;
	high = 100;
	na = *new Napravlenie();
}

//����� ����� ������ 
void Uspevaemost::input() {
	cout << "\n������� ������� ���� ��������: ";
	cin >> srball;
}

//����� �������� ������� ��������� � ����������� �� ������������
int Uspevaemost::getstip()
{
	int stip = 0;
	if (srball <= minimum)
		stip = 1000;
	else if ((srball > minimum) && (srball <= normal))
		stip = 4000;
	else if ((srball > normal) && (srball <= high))
		stip = 7000;
	return stip;
}

//����� ������
void Uspevaemost::output() {
	if (srball <= minimum)
		cout << "������������: ������" << endl;
	else if ((srball > minimum) && (srball <= normal))
		cout << "������������: ����������" << endl;
	else if ((srball > normal) && (srball <= high))
		cout << "������������: �������" << endl;
	cout << "������� ���� ��������: " << srball << endl;

}

//���������� ��������� +
Uspevaemost operator + (Uspevaemost u1, Uspevaemost u2) {
	u1.srball += u2.srball;
	u1.minimum += u2.minimum;
	u1.normal += u2.normal;
	u1.high += u2.high;
	return u1;
}

//���������� ��������� ++ ����������
Uspevaemost& Uspevaemost::operator++() {
	this->srball += 1;
	this->minimum += 1;
	this->normal += 1;
	this->high += 1;
	return *this;
}

//���������� ��������� ++ �����������
Uspevaemost Uspevaemost::operator++(int) {
	Uspevaemost temp = *this;
	++* this;
	return temp;
}