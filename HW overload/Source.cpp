#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

void Print(int Arr[ROWS]);
void Print(double Arr[ROWS]);
//void Print(char Arr[ROWS]);
void Print(int Arr[ROWS][COLS]);
void Print(char Arr[ROWS][COLS]);
void Print(double Arr[ROWS][COLS]);

void Sort(int Arr[ROWS]);
void Sort(char Arr[ROWS]);
void Sort(double Arr[ROWS]);

void Sort(int Arr[ROWS][COLS]);
void Sort(char Arr[ROWS][COLS]);
void Sort(double Arr[ROWS][COLS]);

void Sum(int Arr[ROWS]);
void Sum(double Arr[ROWS]);

void Sum(int Arr[ROWS][COLS]);
void Sum(double Arr[ROWS][COLS]);

void Avg(int Arr[ROWS]);
void Avg(double Arr[ROWS]);

void Avg(int Arr[ROWS][COLS]);
void Avg(double Arr[ROWS][COLS]);

void MinValueIn(int Arr[ROWS]);
void MinValueIn(double Arr[ROWS]);

void MinValueIn(int Arr[ROWS][COLS]);
void MinValueIn(double Arr[ROWS][COLS]);

void MaxValueIn(int Arr[ROWS]);
void MaxValueIn(double Arr[ROWS]);

void MaxValueIn(int Arr[ROWS][COLS]);
void MaxValueIn(double Arr[ROWS][COLS]);

void main()
{
	setlocale(LC_ALL, "");
	
	
	cout << "Одномерный массив int ";
	int i_Arr[ROWS] = { 2,1 };
	Print(i_Arr);
	Sort(i_Arr);
	Print(i_Arr);
	Sum(i_Arr);
	Avg(i_Arr);
	MinValueIn(i_Arr);
	MaxValueIn(i_Arr);

	cout << endl;
	
	cout << "Одномерный массив double ";
	double d_Arr[ROWS] = { 2.1,1.1 };
	Print(d_Arr);
	Sort(d_Arr);
	Print(d_Arr);
	Sum(d_Arr);
	Avg(d_Arr);
	MinValueIn(d_Arr);
	MaxValueIn(d_Arr);

		//char
	/*char c_Arr[ROWS] = {char(2),char(1)};
	cout << "Одномерный массив char";
	Print(c_Arr);*/
	
	

	
	
}
void Print(int Arr[ROWS])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(double Arr[ROWS])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Print(char Arr[ROWS])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << (Arr[i]) << "\t";
	}
	cout << endl;
}




void Sort(int Arr[ROWS])
{
	cout << "Сортировка ";
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
							}
		}
		
	}
	
}
void Sort(double Arr[ROWS])
{
	cout << "Сортировка ";
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
							}
		}
		
	}
	
}


void Sum(int Arr[ROWS])
{
	cout << "Сумма ";
	int sum=0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
	cout << sum<<endl;
}
void Sum(double Arr[ROWS])
{
	cout << "Сумма ";
	double sum=0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
	cout << sum<<endl;
}


void Avg(int Arr[ROWS])
{
	cout << "Среднее арифметическое ";
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
			cout<<double(sum) / ROWS<<endl;
}
void Avg(double Arr[ROWS])
{
	cout << "Среднее арифметическое ";
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
			cout<<double(sum) / ROWS<<endl;
}


void MinValueIn(int Arr[ROWS])
{
	cout << "Минимальное значение ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0]<<endl;
}
void MinValueIn(double Arr[ROWS])
{
	cout << "Минимальное значение ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0]<<endl;
}


void MaxValueIn(int Arr[ROWS])
{
	cout << "Максимальное значение ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] > Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0]<<endl;
}
void MaxValueIn(double Arr[ROWS])
{
	cout << "Максимальное значение ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] > Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0]<<endl;
}



