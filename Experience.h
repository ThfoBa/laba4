#pragma once
class Experience
{
	friend Experience operator + (Experience e1, Experience e2);
public:
	Experience(int s, int a);
	Experience(int x);
	Experience();
	void input();
	void output();
	float allexperience();
	void set(Experience e);
	Experience& operator++(); //����������
	Experience operator++(int); //�����������
private:
	int studyyears; //���-�� �������� ��� ��������
	int akadem; //���-�� ��� � �������
};