#include <stdio.h>


int cw3_CzyParzysta(int x) {

	return (x & 1) == 0;
}


int cw3_CzyPotegaDwojki(unsigned int x) {

	while (((x & 1) == 0) && x > 1)
		x >>= 1;

	return (x == 1);
}

float cw3_WartoscBezwzgledna(float x) {

	return x >= 0 ? x : -x;
}

int cw3_ZnakLiczby(float x) {

	return x > 0 ? 1 : x < 0 ? -1 : 0;
}


int cw3_CzyDoskonala(unsigned long x) {
	int suma = 0;
	int iter = 1;

	while (iter <= x - 1) {

		if (x % iter == 0) {
			suma += iter;
		}
		iter += 1;
	}
	return suma == x ? 1 : 0;
}