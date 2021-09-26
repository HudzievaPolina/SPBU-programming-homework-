#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "impossible" << endl;
	}
	else if ((c * c + b * b - a * a) / b * c < 0 || (c * c + a * a - b * b) / a * c < 0 || (a * a + b * b - c * c) / b * a < 0)
	{
		cout << " obtuse" << endl;
	}
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	{
		cout << "right" << endl;
	}
	else
	{
		cout << "acute" << endl;
	}
	return EXIT_SUCCESS;
}