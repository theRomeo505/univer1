﻿// labka1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
//Реалізувати переведення числа з десяткової системи числення у систему з основою m& lt; 10.
void laba1task1(int n, int s)
{
	int d;
	vector <int> m;
	while (n > 0)
	{
		d = n % s;
		n /= s;
		m.push_back(d);
	}
	for (int i = m.size() - 1; i >= 0; i--) {
		cout << m[i];
	}
	cout << endl;
}
//(Критерій Корсельта) Складене число n є числом Кармайкла тоді і тільки тоді, коли n не ділиться 
//на квадрат жодного числа і, крім того, для всіх простих дільників p числа n число n - 1 ділиться 
//націло на p - 1. Перевірити чи є введене число числом Кармайкла.
bool ifPrime(int n) {
	
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
void laba1task2(int n) {
	bool k = false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{ 
			k = true;
			if (n % (i * i) == 0)
			{
				cout << "Not a Carmike number\n"; return;
			}
			if (ifPrime(i) && (n - 1) % (i - 1) != 0)
			{
				cout << "Not a Carmike number\n"; return;
			}
			
		}
	}
	if (k)
	cout << "It`s a Carmike number\n";
	else
	cout << "Not a Carmike number\n";
}
int main()
{
	int n, s;
	//cin >> n >> s;
	//laba1task1(n, s);
	//cin >> n;
	
		laba1task2(561);
		
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
