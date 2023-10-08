#include "matrix.h";
#include <ctime>;

void Matrix::setMatrix(int rowAmount, int colAmount)
{
	srand(time(0));
	matrix = new int* [rowAmount];
	for (size_t i = 0; i != rowAmount; ++i)
	{
		matrix[i] = new int[colAmount];
	}
	for (size_t i = 0; i != rowAmount; ++i)
	{
		for (size_t j = 0; j != colAmount; ++j)
		{
			matrix[i][j] = rand() % 100 + 1;
			std::cout << matrix[i][j] << " | ";
		}
		std::cout << std::endl;
	}
}

void Matrix::changeMatrix(int rowAmount, int colAmount)
{
	int** tempMatrix = new int* [colAmount];
	for (size_t i = 0; i != colAmount; ++i)
	{
		tempMatrix[i] = new int[rowAmount];
	}
	for (size_t i = 0; i != colAmount; ++i)
	{
		for (size_t j = 0; j != rowAmount; ++j)
		{
			tempMatrix[i][j] = matrix[j][i];
		}
	}
	delete[] matrix;
	matrix = new int* [colAmount];
	for (size_t i = 0; i != colAmount; ++i)
	{
		matrix[i] = new int[rowAmount];
	}
	for (size_t i = 0; i != colAmount; ++i)
	{
		for (size_t j = 0; j != rowAmount; ++j)
		{
			matrix[i][j] = tempMatrix[i][j];
			std::cout << matrix[i][j] << " | ";
		}
		std::cout << std::endl;
	}
	delete[] tempMatrix;
}