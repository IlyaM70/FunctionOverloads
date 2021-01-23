#include"functions.h"

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
