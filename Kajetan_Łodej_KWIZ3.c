#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KL_KWIZ3 400

void generuj_tablice(int* t, int n, int a, int b);
void wypisz_tablice(int* a, int n);
void £odejKajetan(void);
int CzyParzysta(int x);


int main() {

	£odejKajetan();

}



int CzyParzysta(int x) {

	return (x & 1) == 0;
}

void £odejKajetan(void) { //Program liczy œredni¹ liczb o nieparzystych indeksach bez modulo, ale niestety nie sprawdza czy ostatnia cyfra to 5
	int count = 0;
	int sum = 0;
	int srednia = 0;

	int T[KL_KWIZ3];

	srand((unsigned int)time(0));

	for (int i = 0; i < KL_KWIZ3; ++i) {
		T[i] = rand() % (1999 - 99 + 1) + 99;
		if (CzyParzysta(i) == 0) {
			count = count + 1;
			sum = sum + T[i];
		}
	}
	srednia = sum / count;
	printf("Srednia: %d", srednia);
}
