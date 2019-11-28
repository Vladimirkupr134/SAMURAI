// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int number_c, number_d, number_a;

	setlocale(LC_ALL, "Russian");
	cout << "Введите три числа" << std::endl;
	cin >> number_c;
	cin >> number_d;
	cin >> number_a;
	cout <<((atan(number_c / 4) - number_d * 62) / (number_a * number_a - 1)) << endl;
	return 0;
}
