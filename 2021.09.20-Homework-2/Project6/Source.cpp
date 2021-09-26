#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	if (abs(a - b) == abs(c - d) || abs(a - c) == abs(b - d) || a == c || b == d)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
}