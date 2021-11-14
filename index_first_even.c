#include "index_first_even.h"
int f0(int m[], int size) {
	for(int i = 0; i < size; i++) {
		if(m[i] % 2 == 0) {
			return i;
		}
	}
	return -1;
}