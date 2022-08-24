#include <iostream>
#include <string>

using namespace std;

void CalculateSum()
{
	int sum = 100 + 10;

	cout << "Sum = " << sum << endl;
}

int CalculateDiv(int a, int b)
{
	int sum = a / b;

	return sum;
}

void SomeBull(string a, int b, bool c)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

int main()
{
	CalculateSum();

	cout << "CalculateDiv = " << CalculateDiv(50, 25) << endl;

	SomeBull("A", 8, false);

	system("pause");
	return 0;
}

