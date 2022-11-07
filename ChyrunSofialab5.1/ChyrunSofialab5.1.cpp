// ChyrunSofialab5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_05_1.cpp
// < Чирун Софія >
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз  
// Варіант 18

#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y); 

int main()
{
	double r, s;
	
    cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;

	double c = (pow(g(r,pow(s, 2) + 1),2)) + g(1, pow(r, 2) + s) / (1 + pow(g(1, r * s),2));

	cout << "c = " << c << endl;

	return 0;
}

double g(const double x, const double y) 
{
	return (pow(sin(x),2) + pow(cos(x),2)) / (1 + abs(x*y));
}

