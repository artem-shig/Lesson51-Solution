#include "logic.h"

int main() {
	int n, m;
	cout << "Enter size of matrix(NxM): ";
	cin >> n >> m;

	int** matrix = new int*[n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}

	cout << "Matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

	int imin = 0;
	int jmin = 0;

	get_extreme_position(matrix, n, m, imin, jmin);

	cout << "Min value is " << matrix[imin][jmin] << endl;
	cout << "Position: matrix[" << imin + 1 << "][" << jmin + 1 << "]\n.";

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

	return 0;
}
