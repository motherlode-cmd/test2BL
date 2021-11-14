#include "sum_before_even_and_after_odd.h"
#include "index_last_odd.h"
#include "index_first_even.h"
#include <stdlib.h>
int f3(int m[], int size) {
	int sum = 0;
	for(int i = f0(m, size) - 1; i >= 0; i--) {
		sum += abs(m[i]);
	}
	for(int i = f1(m, size); i < size; i++) {
		sum += abs(m[i]);
	}
	return sum;
}