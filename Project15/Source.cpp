#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>

using namespace std;


void fillArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		*p = 1 + rand() % 10;
	}
}
void printArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}


bool asc(int a, int b) {
	return a > b;
}
bool desc(int a, int b) {
	return a < b;
}
void bubblesort(int *a, int n, bool(*func)(int, int)) {
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (func(a[i], a[i + 1]) == 1)
				swap(a[i], a[i + 1]);
		}

	}
}
void znach(int *a, int n, int p) {
	int count = 0, b=0;
	int more = 0;
	int less = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > p)	more++;
		if (a[i] < p)	less++;
		
	}
	
	if (more > less) {
		cout << "×èñåë > P - áîëüøå" << endl;
		cout << more << endl;
	}
		
	
	else {
		cout << "×èñåë < P - áîëüøå" << endl;
		cout << less << endl;
	}
		


}
void summ(int *a, int n, int p, int k) {
	int d = 0;
	

	for (int i = 0; i < n; i++)
	{
			
		if (a[i] < p || a[i]>k)
			d=d+a[i];
	}
	cout << "Summ =" << d << endl;
	



}

int main()
{
	setlocale(LC_ALL, "");
	//Используя указатели в упорядоченном по возрастанию массиве выяснить, что больше элементов со значением > Р или элементов со значением < Р.
	/*int a[10];
	int n = 10, p = 0;
	cout << "Enter P" << endl;
	cin >> p;
	fillArray(a, n);
	printArray(a, n);
	bubblesort(a, n, asc);
	printArray(a, n);
	znach(a, n, p);*/
	
	//. Используя указатели в упорядоченном по возрастанию массиве подсчитать сумму элементов, расположенных за элементом со значением Р и до элемента со значением К ( Р > К ).


	int a[10];
	int n = 10, p = 0, k=0;
	cout << "Enter P" << endl;
	cin >> p;
	cout << "Enter K" << endl;
	cin >> k;
	fillArray(a, n);
	printArray(a, n);
	bubblesort(a, n, asc);
	printArray(a, n);
	summ(a, n, p, k);


	system("pause");
}
