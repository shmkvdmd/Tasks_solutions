#include "Tiles.h"
#include <iostream>

Tiles::Tiles(std::string brand, int size_h, int size_w, double price)
{
	this->brand = brand;
	this->size_h = size_h;
	this->size_w = size_w;
	this->price = price;
}

Tiles::Tiles()
{
	this->brand = "brand";
	this->size_h = 10;
	this->size_w = 10;
	this->price = 9.99;
}

Tiles::~Tiles()
{}

std::string Tiles::getBrand() { return brand; }
void Tiles::setBrand(std::string value) { brand = value; }

double Tiles::getPrice() { return price; }
void Tiles::setPrice(double value) { price = value; }

int Tiles::getSizeH() { return size_h; }
void Tiles::setSizeH(int value) { size_h = value; }

int Tiles::getSizeW() { return size_w; }
void Tiles::setSizeW(int value) { size_w = value; }

void Tiles::print()
{
	std::cout << "brand: " << brand << "\nsize_h: " << size_h << "\nsize_w: " << size_w << "\nprice: " << price << "\n\n";
}