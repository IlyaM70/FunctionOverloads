#include<iostream>
using namespace std;
int Factorial(int a);
int Power(int b, int c);

void main()
{
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cout << "¬ведите число, факториал которого требуетс€ найти  "; cin >> a;
	cout << Factorial(a) << endl;
	cout << "¬ведите основание и показатель степени "; cin >> b >> c;
	cout << Power(b,c) << endl;
}
int Factorial(int a)
{
	int fact = 1;
	for (int i = 1; i <= a; i++)
	{
		fact *= i;
	}
	return fact;

}
int Power(int b, int c)
{
	int pow = 1;
	for (int i = 1; i <= c; i++)
	{
		pow *= b;
	}
	return pow;
}