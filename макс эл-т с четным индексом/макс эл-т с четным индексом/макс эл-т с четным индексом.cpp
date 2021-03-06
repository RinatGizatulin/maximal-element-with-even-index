// в массиве найти наибольший элемент с четным индексом

#include "stdafx.h"
#include "iostream"
using namespace std;

const int n = 5, m = 10;   // размеры матрицы
int arr[n][m], max1, maxmax;

int main()
{
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i < n; i++)				// заполнение матрицы
	{
		for (int j = 0; j < m; j++)
			arr[i][j] = (i + 1) * 10 + (j + 1);
	}

	for (int i = 0; i < n; i++)   // вывод матрицы
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int max = arr[0][0];                // нахождение элемента
	int a = -1, b = -1, c;
	for (int i = 0; i < n; i++)
	{
		a++;
		for (int j = 0; j < m; j++)
		{
			b++;
			c = (a + b) % 2;
			if (c == 0)
				max1 = arr[i][j];
			if (max > max1)
				maxmax = max; 
			else maxmax = max1;
			
		}
	}
	cout << endl << "Максимальный элемент с четным индексом = " << maxmax << endl;  // вывод нужного элемента

	system("pause");
    return 0;
}

