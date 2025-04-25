#include "logic.h"

int main() {
	int* arr;

	int n, m;
	cout << "Enter size of matrix(NxM): ";
	cin >> n >> m;
	arr = new int[n * m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i * m + j] = rand() % 100;
		}
	}

	cout << "Matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i * m + j] << "\t";
		}
		cout << endl;
	}

	int imax = 0, jmax = 0;

	get_extreme_position(arr, n, m, imax, jmax);

	cout << "Max value is " << arr[imax * m + jmax] << endl;
	cout << "i = " << imax + 1 << ", j = " << jmax + 1 << endl;

	delete[] arr;

	return 0;
}