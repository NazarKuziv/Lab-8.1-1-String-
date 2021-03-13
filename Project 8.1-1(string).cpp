// Lab_8_1-1.cpp
// < Кузів Назар >
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 6

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
 Вияснити, чи є серед цих символів пара сусідніх букв “SQ” або ”QS”.
*/

int Include(const string s)
{
	int i = 0;
	size_t pos = 0;
	while ((pos = s.find('S', pos)) != -1)
	{
		pos++;
		if (s[pos] == 'Q')
		{
			i++;
			break;
		}
			
	}
	  if (i > 0)
		return i;
	else
	{
		size_t pos = 0;

		while ((pos = s.find('Q', pos)) != -1)
		{
			pos++;
			if (s[pos] == 'S')
			{
				i++;
				break;
			}
		}
	}
	
	return i;
}
int main()
{
	char s[51];

	cout << "Enter string:" << endl;

	cin.getline(s, 50);
	cout << endl;

	int I = Include(s);
	if (I > 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

