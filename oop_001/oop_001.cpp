//Создать класс Tiles(кафель), который будет содержать поля brand, size_h, size_w, price
//В главной функции объявить пару объектов класса и внести данные в поля.
//Затем отобразить их
#include <iostream>
#include "Tiles.h";

int main()
{
    Tiles tile1 = { "tile111", 20, 30, 19.99 };
    Tiles tile2 = { "tile222", 40, 40, 49.99 };
    tile1.print();
    tile1.setPrice(15.99);
    tile1.setBrand("tile112");
    tile1.print();
    tile2.print();
    tile2.setPrice(tile1.getPrice());
    tile2.print();
}
