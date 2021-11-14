#include <stdlib.h>
#include "sum_between_even_odd.h"
#include "index_last_odd.h"
#include "index_first_even.h"
int f2(int m[], int size) {
	int sum = 0;
	for(int i = f0(m, size); i < f1(m, size); i++) {
		sum += abs(m[i]);
	}
	return sum;
}