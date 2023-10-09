//Практика написания тестов

#include "pch.h"
#include "CppUnitTest.h"
#include "..\oop_001\Tiles.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oop001tests
{
	TEST_CLASS(oop001tests)
	{
	public:
		
		TEST_METHOD(DefaultConstructorTest)
		{
			Tiles tile;
			Assert::IsTrue(tile.getBrand() == "brand", L"Assert 1");
			Assert::IsTrue(tile.getPrice() == 9.99, L"Assert 2");
			Assert::IsTrue(tile.getSizeH() == 10, L"Assert 3");
			Assert::IsTrue(tile.getSizeW() == 10, L"Assert 4");
		}
		TEST_METHOD(ParameterConstructorTest)
		{
			Tiles tile("paramBrand", 50, 50, 49.99);
			Assert::IsTrue(tile.getBrand() == "paramBrand");
			Assert::IsTrue(tile.getPrice() == 49.99);
			Assert::IsTrue(tile.getSizeH() == 50);
			Assert::IsTrue(tile.getSizeW() == 50);
		}
	};
}
