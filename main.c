<<<<<<< HEAD
#include "cw1.h"
#include "cw2.h"
#include "cw3.h"
#include "cw4.h"
#include "cw5.h"

#include <stdio.h>

//wywo³ywanie funkcji bez voida i z ;

int main() {

	test_generuj_tablice();

}

=======
#include <stdio.h>

#define KAJETAN_LODEJ 30

int CzyParzysta(int x) {
	return (x & 1) == 0;
}

void Kwiz_KL() {
	int x;
	int z;
	char napis[30];
	char znak;

	if (scanf_s("%d", &x) <1)
	{
		printf("Niepoprawne dane");
		return;
	}
	if (CzyParzysta(x) == 0) {
		scanf_s("%s %d %c", napis, sizeof(napis), &z, &znak, sizeof(znak));
		if (z < KAJETAN_LODEJ) {
			printf("%s %c", napis, znak);
		}
		else {
			printf("%c %s", znak, napis);
		}
	}
	else {
		char w[30];
		char ww[30];
		scanf_s("%s %s", w, sizeof(w), ww, sizeof(ww));
		printf("%s %d %s", w, x, ww);
	}
}

int main() {

	Kwiz_KL();
	//int x = 5;
	//printf("%d", CzyParzysta(4));
}
>>>>>>> 021bd6460183f016ec3b39c020ddbd6429d77e67
