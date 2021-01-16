#include<iostream>
using namespace std;
const int ROWS = 8;
const int COLS = 5;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m,const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
		Print(arr, n);
		const int D_SIZE = 8;
		double d_arr[D_SIZE];
		FillRand(d_arr, D_SIZE);
		Print(d_arr, D_SIZE);

		
		int i_arr_2[ROWS][COLS];
		FillRand(i_arr_2, ROWS, COLS);
		Print(i_arr_2, ROWS, COLS);
		

}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
	void FillRand(int arr[ROWS][COLS], const int m, const int n)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				arr[i][j] = rand() % 100;
				
			}
		}
	}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Print(int arr[ROWS][COLS], const int m, const int n)
{
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				cout << arr[i][j] << "\t";
		}
	}
}

