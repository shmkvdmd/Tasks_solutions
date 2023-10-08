#pragma once
#include <iostream>
#include <vector>

class Matrix
{
private:
	int** matrix;
public:
	void setMatrix(int, int);
	void changeMatrix(int, int);
};

