#include "logic.h"

void get_extreme_position(int* arr, int n, int m, int& imax, int& jmax) {
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i * m + j] > arr[imax * m + jmax]) {
				imax = i;
				jmax = j;
			}
		}
	}
}