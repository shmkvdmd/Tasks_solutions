//Преобразовать строки двумерного массива в столбцы.
//Класс будет содержать два метода : один заполнит массив значениями, 
//второй произведет замену значений строк на значения столбцов.
#include <iostream>
#include "matrix.h";

int main()
{
    Matrix matrix;
    int rows = 0, columns = 0;
    std::cout << "Row amount: "; std::cin >> rows;
    std::cout << "Columns amount: "; std::cin >> columns;
    std::cout << "\n\tDefault matrix\n";
    matrix.setMatrix(rows, columns);
    std::cout << "\n\tChanged matrix\n";
    matrix.changeMatrix(rows, columns);
}
