// ConsoleApplication39.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{//task1
	float a = 100.00;
	float b = 0.001;
	float a1 = pow(a + b, 4);
	float a2 = pow(a, 4);
	float a3 = 4 * pow(a, 3)*b;
	float a4 = 6 * pow(a, 2)*pow(b, 2);
	float a5 = pow(b, 4);
	float a6 = 4 * a*pow(b, 3);//конец малых
	float a7 = (a2 + a3 + a4);//вторая скобка числителя
	float a8 = a5 + a6;//делитель
	float a9 = a1 - a7;//целый числитель
	float a10 = a9 / a8;
	cout << "using double: " << a10 << endl;
	double c = 100.00;
	double d = 0.001;
	double c1 = pow(c + d, 4);
	double c2 = pow(c, 4);
	double c3 = 4 * pow(c, 3)*d;
	double c4 = 6 * pow(c, 2)*pow(d, 2);
	double c5 = pow(d, 4);
	double c6 = 4 * c*pow(d, 3);//конец малых
	double c7 = (c2 + c3 + c4);//вторая скобка числителя
	double c8 = c5 + c6;//делитель
	double c9 = c1 - c7;//целый числитель
	double c10 = c9 / c8;
	cout << "using double: " << c10 << endl;
    //task2 
	int n = 7;
	int m = 10;
	cout << "n: " << n << endl;
	cout << "m: " << m << endl;
	int r1 = n++ - m;//
	cout << "n: " << n << endl;
	cout << "m: " << m << endl;
	cout << "n++-m: " << r1 << endl;
	bool r2 = m-- > n;
	cout << "m-- > n: " << boolalpha << r2 << endl;
	cout << "n: " << n << endl;
	cout << "m: " << m << endl;
	bool r3 = n-- > m;
	cout << "n-->m: " << r3 << endl;
	cout << "n: " << n << endl;
	cout << "m: " << m << endl;
	system("pause");
	return 0;
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
