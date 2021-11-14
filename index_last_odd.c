#include "index_last_odd.h"
int f1(int m[], int size) {
	for(int i = size - 1; i >= 0; i--) {
		if(m[i] % 2 != 0) {
			return i;
		}
	}
	return -1;
}