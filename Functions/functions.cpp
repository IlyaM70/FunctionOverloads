#include<iostream>
using namespace std;
int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(double a, double b);

void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "¬ведите два числа "; cin >> a >> b;
	int c = Add(a, b);
	cout << c << endl;
	cout << Sub(a, b) << endl;
	cout << Mul(a, b) << endl;
	cout << Div(a, b) << endl;

}
int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	int diff = a - b;
	return diff;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(double a, double b)
{
	return a / b;
}