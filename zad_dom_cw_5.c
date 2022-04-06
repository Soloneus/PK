/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void generuj_tablice(int* t, int n, int a, int b);
void wypisz_tablice(int* a, int n);
int czy_potega_dwa(int a);
int suma_potega_dwa(int* a, int n);
int czy_pierwsza(int a);
int srednia_liczby_pierwsze(int* a, int n);
void testy_zad_domowe();


int main() {

	testy_zad_domowe();

}


void generuj_tablice(int* t, int n, int a, int b)
{
	// inicjalizacja generatora liczb pseudolosowych
	srand((unsigned int)time(0));
	for (int i = 0; i < n; ++i) {
		t[i] = rand() % (b - a + 1) + a;
	}
}

// wypisywanie tablicy
void wypisz_tablice(int* a, int n)
{
	for (int i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
}

int czy_potega_dwa(int a)
{
	while (a >= 2)
	{
		if (a & 1)
		{
			return 0;
		}
		a >>= 1;
	}
	return 1;
}


int suma_potega_dwa(int* a, int n)
{
	int suma = 0;

	for (int i = 0;i < n;i++) {
		if ((i % 2 == 0) && czy_potega_dwa(a[i])) {
			suma = suma + a[i];
		}
	}
	return suma;
}


int czy_pierwsza(int a)
{
	if (a == 1)
	{
		return 0;
	}
	for (int i = a - 1; i > 1; i--)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int srednia_liczby_pierwsze(int* a, int n) {

	int count = 0;
	int sum = 0;

	for (int i = 0;i < n;i++) {
		if (czy_pierwsza(a[i])) {
			count = count + 1;
			sum = sum + a[i];
		}
	}
	return sum / count;
}


void testy_zad_domowe() {

	int T[SIZE];
	generuj_tablice(T, SIZE, 2, 1025);
	wypisz_tablice(T, SIZE);
	printf("\nZad 1 wynik: %d ", srednia_liczby_pierwsze(T, SIZE));
	printf("\nZad 2 wynik: %d ", suma_potega_dwa(T, SIZE));

}
*/