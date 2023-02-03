// kursvalut.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(0, "");


	int sum = 0, sumProcent = 0;
	cout << "Введите желаемую сумму на депозит\n";
	cin >> sum;
	 const int a = 12;
    int N[a];
	for (int i = 0; i < a; i++)
	{
		N[i] = 60 + rand() % 20;
		cout << "Курс валют за " << i + 1 << "месяц :" << N[i] << "\n";
	}

	int M[a];
	for (int i = 0; i < a; i++)
	{
		M[i] = 6;
		cout << "Процент за " << i + 1 << "месяц :" << M[i] << "\n";
	}

	int P[a];
	for (  int i = 0; i < a; i++)
	{
		P[i] = N[i] * sum * M[i] / 100;
		cout << "Суммы денег за месяц" << i+1<< "составит" << P[i] << "\n";
	}

}

