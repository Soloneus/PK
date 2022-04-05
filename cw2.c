#include <stdio.h>
#include <math.h>

void cw2_zad1() {

    int a, b, pole;
    printf("Wpisz dwa boki: ");
    scanf_s("%d %d", &a, &b);
    pole = a * b;
    if (a == b) {
        printf("Pole: %d, pole kwadratu", pole);
    }
    else {
        printf("Pole: %d, pole prostokata", pole);
    }

}

void cw2_zad2() {

    int a, b;
    char znak;
    scanf_s("%d", &a);
    scanf_s(" %c", &znak);
    scanf_s("%d", &b);

    if (znak != '+' && znak != '-' && znak != '*' && znak != '/') {
        printf("Dzialanie niepoprawne");
        return;
    }

    if (znak == '+') {
        printf("Dodawanie %d %c %d = %d", a, znak, b, a + b);
        return;
    }
    if (znak == '-') {
        printf("Odejmowanie %d %c %d = %d", a, znak, b, a - b);
        return;
    }
    if (znak == '*') {
        printf("Mnoznenie %d %c %d = %d", a, znak, b, a * b);
        return;
    }
    if (znak == '/') {
        if (b == 0) {
            printf("Nie mozna dzielic przez zero");
        }
        else {
            printf("Dzielenie %d %c %d = %d", a, znak, b, a / b);
        }
    }

}

void cw2_zad3() {

    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c) {
            printf("%d jest najwieksze", a);
        }
        else {
            printf("%d jest najwieksze", c);
        }
    }
    else {
        if (b > c) {
            printf("%d jest najwieksze", b);
        }
        else {
            printf("%d jest najwieksze", c);
        }
    }
}

void cw2_zad4() {

    int a, b, c, delta;
    float x1, x2;
    printf("Wpisz wspó³czynniki a,b,c: ");
    if (scanf_s("%d%d%d", &a, &b, &c) < 3) {
        printf("Niepoprawne dane");
        return;
    }
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = ((-b - sqrt(delta)) / 2 * a);
        x2 = ((-b + sqrt(delta)) / 2 * a);
        printf("Istnieja dwa pierwiastki kwadratowe: %f, %f", x1, x2);
    }
    if (delta < 0) {
        printf("Brak pierwiastkow rzeczywistych");
    }
    if (delta = 0) {
        x1 = (-b / (2 * a));
        printf("Istnieja dwa te same pierwiastki %f", x1);
    }
}