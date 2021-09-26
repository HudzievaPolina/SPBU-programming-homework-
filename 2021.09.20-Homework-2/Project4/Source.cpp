#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	x = -b / a;
	if (x == -d / c || -b % a != 0)
	{
		cout << "NO" << endl;
	}
	else if (a == 0 && b == 0)
	{
		cout << "INF" << endl;
	}
	else
	{
		cout << x << endl;
	}
	return EXIT_SUCCESS;
}