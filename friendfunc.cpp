#include "Uspevaemost.h"
#include "Napravlenie.h"
#include <iostream>

void getbonus(Napravlenie na)
{
	if (na.elite == 1)
		cout << "����� �� �������";
	else
		cout << "������� ����� � ������� 2000";
}