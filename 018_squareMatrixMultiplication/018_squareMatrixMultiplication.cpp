#include <iostream>
#include <vector>

std::vector<std::vector<int>> matrix_multiplication(std::vector<std::vector<int>>& a, std::vector<std::vector<int>>& b, size_t n) {
	std::vector<std::vector<int>> c(n, std::vector<int>(n, 0));
	for (size_t i = 0; i < n; ++i)
	{
		for (size_t j = 0; j < n; ++j)
		{
			for (size_t k = 0; k < n; ++k)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return c;
}

int main()
{
	std::vector<std::vector<int>> a = { {1 ,2}, {3,2} };
	std::vector<std::vector<int>> b = { {3,2},{1,1} };
	for (const auto& num : matrix_multiplication(a, b, 2))
	{
		for (const auto& n : num)
		{
			std::cout << n << " ";
		}
	}
}
