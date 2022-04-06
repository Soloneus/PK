#include <stdio.h>
#include <stdlib.h>
int CzyPierwsza(unsigned long a);
int PierwszaWiekszaNiz(unsigned long a);
void PostacBinarna(short a);


int main() {
	/*
	int size = 7;
	//int* a = (int*)calloc(size, sizeof(*a));
	int* a = (int*)malloc(size * sizeof(int));

	for (int i = 0;i < size;i++) {
		a[i] = i;
		printf("%d", a[i]);
	}
	*/
	int a, b, c;
	int size = 2;
	char napis[30];
	int* d = (int*)malloc(size * sizeof(int));
	char znak;
	if (scanf_s("%d %s %c", &a, napis, sizeof(napis), &znak, sizeof(znak)) < 3) {
		printf("Niepoprawne dane wejsca");
		return;
	}
	//printf("%d%s%c",a,napis,znak);
	for (int i = 0;i < size;i++) {
		d[i] = znak;
		printf("%c", d[i]);
	}
}


int PierwszaWiekszaNiz(unsigned long a) {

	do {

		a = a + 1;

	} while (CzyPierwsza(a) == 0);

	return a;

}

int CzyPierwsza(unsigned long a)
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

void PostacBinarna(short a) {

	int b;

	for (int i = 31; i >= 0; i--) {

		b = a >> i;

		if ((b & 1) == 1) {

			printf("1");

		}
		else {

			printf("0");

		}
	}
}


