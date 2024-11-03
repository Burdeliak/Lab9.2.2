#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.2.2/geometry_macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestTriangleArea)
		{
			double a = 3.0, b = 4.0, c = 5.0;

			// Перевірка, чи значення a, b, c утворюють трикутник
			Assert::IsTrue(IS_TRIANGLE(a, b, c), L"3, 4, 5 утворюють трикутник");

			// Розрахунок очікуваної площі
			double expectedArea = 6.0;

			// Виклик макросу для обчислення площі трикутника
			double actualArea = AREA_TRIANGLE(a, b, c);

			// Перевірка на відповідність обчисленої і очікуваної площ
			Assert::AreEqual(expectedArea, actualArea, 1e-5, L"Площа трикутника 3, 4, 5 повинна дорівнювати 6.0");
		}
	};
}
