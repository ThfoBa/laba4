#include "Experience.h"
#include <iostream>
using namespace std;

//����������� ������ �� ����� �����������
Experience::Experience(int studyyears, int akadem) {
	if (studyyears >= 0)
		this->studyyears = studyyears;
	else {
		cout << "������� ������������ �������� studyyears." << endl;
		this->studyyears = 0;
	}
	if (akadem >= 0)
		this->akadem = akadem;
	else {
		cout << "������� ������������ �������� akadem." << endl;
		this->akadem = 0;
	}
}

//����������� ������ � ����� ����������
Experience::Experience(int allfields) {
	studyyears = allfields;
	akadem = allfields;
}
	
	

//����������� ������ ��� ����������
Experience::Experience() {
	studyyears = 0;
	akadem = 0;
}

//����� ����� 
void Experience::input() {
	int studyyears, akadem;
	cout << "\n������� ���������� ������ ��� ��������: " << endl;
	cin >> studyyears;
	cout << "������� ���������� ���, ���������� � ������������� �������: " << endl;
	cin >> akadem;
	Experience e(studyyears, akadem);
	this->set(e);
}

//����� ������
void Experience::output() {
	cout << "���������� ��� ��������: " << studyyears << endl;
	cout << "���������� ��� � ������������� �������: " << akadem << endl;
	cout << "���������� ���, ���������� � ���� �����: " << allexperience() << endl;
}

//����� ������������ ����� �����, ����������� � ����
float Experience::allexperience() {
	int all;
	all = studyyears;
	all += akadem;
	return all;
};

//����� ��������� ��������
void Experience::set(Experience e) {
	this->studyyears = e.studyyears;
	this->akadem = e.akadem;
}

//���������� ��������� +
Experience operator + (Experience e1, Experience e2) {
	e1.studyyears += e2.studyyears;
	e1.akadem += e2.akadem;
	return e1;
}

//���������� ��������� ++ ����������
Experience& Experience::operator++() {
	this->studyyears += 1;
	this->akadem += 1;
	return *this;
}

//���������� ��������� ++ �����������
Experience Experience::operator++(int) {
	Experience temp = *this;
	++* this;
	return temp;
}