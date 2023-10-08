#pragma once
#include <string>
class Tiles
{
private:
	std::string brand;
	int size_h;
	int size_w;
	double price;
public:
	Tiles(std::string,int,int,double);
	~Tiles();
	void print();
	std::string getBrand();
	int getSizeH();
	int getSizeW();
	double getPrice();
	void setBrand(std::string);
	void setSizeH(int);
	void setSizeW(int);
	void setPrice(double);
};

