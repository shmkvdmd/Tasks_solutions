#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;

pair<size_t, size_t> MatrixArgMax(const vector<vector<int>>& matrix)
{
	pair<size_t, size_t> argMax = { 0,0 };
	int max = matrix[0][0];
	for (size_t i = 0; i != matrix.size(); ++i)
	{
		for (size_t j = 0; j != matrix[i].size(); ++j)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				argMax = { i,j };
			}
		}
	}
	return argMax;
}

vector<vector <int>> createMatrix(const int columns, const int rows, const int start, const int end)
{
	vector<vector<int>> matrix(rows);
	for (size_t i = 0; i != rows; ++i)
	{
		matrix[i].resize(columns);
		for (size_t j = 0; j != columns; ++j)
			matrix[i][j] = (rand() % (end - start + 1) + start);
	}
	return matrix;
}

void printMatrix(vector<vector<int>> matrix)
{
	for (vector<int>& vec_current : matrix)
	{
		for (int& value : vec_current)
			cout << value << " ";
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	vector<vector<int>> matrix;
	int columns, rows, start, end;
	cout << "\tРазмер матрицы\nКол-во столбцов: "; cin >> columns;
	cout << "Кол-во строк: "; cin >> rows;
	cout << "\tДиапазон значений\nОт: "; cin >> start;
	cout << "До: "; cin >> end;
	matrix = createMatrix(columns, rows, start, end);
	printMatrix(matrix);
	cout << "\n\nМаксимальное значение находится в: " << MatrixArgMax(matrix).first << ", " << MatrixArgMax(matrix).second;
}