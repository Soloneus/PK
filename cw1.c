#include <stdio.h>

void cw1_zad1() {
	printf("Hello world");
}

void cw1_zad2() {
	printf("Podaj dwie liczby");
	int a, b;

	scanf_s("%d%d", &a, &b);
	printf(" suma = %d \n odejmowanie = %d \n mnozenie = %d", a + b, a - b, a * b);

}

void cw1_zad3() {

	float promien;
	const float Pi = 3.14;
	printf("Podaj promien: ");
	scanf_s("%f", &promien);
	printf("Pole: %f\nObwod: %f", Pi * promien * promien, 2 * Pi * promien);

}

void cw1_zad4() {
	char imie[30];
	char nazwisko[40];

	printf("Podaj swoje imie i nazwisko: ");

	scanf_s("%s%s", imie, nazwisko);

	printf("Witaj!%s%s", imie, nazwisko);

}

void cw1_zad5() {

	int a, b, pole;
	printf("Wpisz dwa boki: ");
	scanf_s("%d%d", &a, &b);
	pole = a * b;
	if (a == b) {
		printf("Pole: %d, pole kwadratu", pole);
	}
	else {
		printf("Pole: %d, pole prostokata", pole);
	}

}

void cw1_zad6() {
	char znak;
	int a, b;
	printf("Wpisz dzialanie: ");
	scanf_s("%c", &znak);
	printf("%c", znak);

}

void cw1_zad7() {
	char name[30];
	char surname[40];

	printf("Podaj imie i nazwisko:");
	if (scanf_s("%s%s", name, surname) < 2) {
		printf("Blad danych wejsciowych");
		return;
	};

	printf("Witaj, %s %s!", name, surname);
}


