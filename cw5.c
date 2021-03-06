/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define MAX_SMALL 30
extern char* ERR_MSG;

// uzupełnienie elementów jednowymiarowej tablicy liczbami
// pseudolosowymi z zakreu [a,b]

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

void test_generuj_tablice()
{
	int t[MAX_SMALL];
	int a, b, c;
	printf("Podaj zakres elementow tablicy (a,b]: ");
	if (scanf_s("%d %d", &a, &b) < 2) {
		printf("%s\n", ERR_MSG);
		return;
	}
	if (a >= b) {
		printf("%s\n", ERR_MSG);
		return;
	}
	generuj_tablice(t, MAX_SMALL, a, b);
	wypisz_tablice(t, MAX_SMALL);
	printf("Elementy parzyste:\n");
	//elementy_parzyste_Piotrek(t, MAX_SMALL);
	printf("Podaj szukana liczbe:\n");
	if (scanf_s("%d", &c) < 1) {
		printf("%s\n", ERR_MSG);
		return;
	}
	printf("Liczba %d wystepuje w tablicy %d razy\n"
		, c, ile_razy(t, MAX_SMALL, c)); // niezadeklarowany udentyfikator "c"
}

void elementy_parzyste_Piotrek(int* a, int n)
{
	printf("\nElementy parzyste:\n");
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			printf("%d ", a[i]);
	}
}

void test_elementy_parzyste_Piotrek()
{
	int t[MAX_SMALL];
	int a, b;
	printf("Podaj zakres elementow tablicy (a,b]: ");
	if (scanf_s("%d %d", &a, &b) < 2) {
		printf("%s\n", ERR_MSG);
		return;
	}

	if (a >= b) {
		printf("%s\n", ERR_MSG);
		return;
	}
	generuj_tablice(t, MAX_SMALL, a, b);
	wypisz_tablice(t, MAX_SMALL);
	elementy_parzyste_Piotrek(t, MAX_SMALL);
}

void elementy_parzyste(int* t, int n)
{
	for (int i = 0; i < n; ++i) {
		if (CzyParzysta(t[i]) == 1) {
			printf("%d ", t[i]);
		}
	}
}


int ile_razy(int* a, int n, int b)
{
	int licznik = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] == b) {
			++licznik;
		}
	}
	return licznik;
}

int Czypotegadwojki(int a)
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
		if ((i % 2 == 0) && Czypotegadwojki(a[i])) {
			suma = suma + a[i];
		}
	}
	return suma;
}


int czy_pierwsza(unsigned long a)
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
		if (czy_pierwsza(a)) {
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