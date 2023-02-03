// урок10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(0, "");

	int N = 0;
	cout << "Введите размер массива: \n";
	cin >> N;
	int *dinamicArr = new int[N];

	for (int i = 0; i < N; i++)
	{
		dinamicArr[i] = 1 + rand() % 100;
		cout << dinamicArr[i] << "\n";
	}

	delete [] dinamicArr;

}
