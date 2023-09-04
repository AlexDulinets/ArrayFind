#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;
int  i,j, n, m;
double s, t, l, k;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "кол-во столбцов = "; cin >> l;
	cout << "кол-во строк    = "; cin >> s;

	if (s - (int)s != 0 || s <= 0 || l - (int)l != 0 || l <= 0)//проверка на -,дробь,0
	{
		cout << "неверное число";
		exit(0);
	}
	n = s;
	m = l;

	double** a = new double* [n * m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) //вводим двумерный массив
			a[i] = new double[n * m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cout << "Введите [" << i + 1 << "][" << j + 1 << "]" << " элементы массива: "; //вводим сами элементы
			cin >> a[i][j];
		}
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << setw(2) << a[i][j] << "   "; //выводим информацию в виде квадратной матрицы
		cout << endl;
	}
	int u = 0;
	double f = 0;
	double max = 0;
	for (int j = 0; j < m; j++) {//находим максимальный элемент в столбце
		double max;
		 max = a[0][j];
		for (int i = 0; i < n; i++)
		{
			if (a[i][j] >= max)
			{
				max = a[i][j];
				u = i;
			}


				for (int j = 0; j < m; j++) {//ищем минимальный элемент в строке
					double min = a[u][0];


					if (a[u][j] <= min)
					{
						min = a[u][j];
						f = min;
					}
				}

			

		}
		
		if (max==f)// проверяем на седловость
		{
			cout << max;
		}
		
	}
	
	}
	

	

