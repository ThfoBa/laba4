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
	Experience& operator++(); //префиксный
	Experience operator++(int); //постфиксный
private:
	int studyyears; //кол-во реальных лет обучения
	int akadem; //кол-во лет в академе
};