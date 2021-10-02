#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 1;
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			if (j == i || a == n)
			{
				cout << a << " " << endl;
				a++;
				break;
			}
			else
			{
				cout << a << " ";
				a++;
			}
		}
		if (a > n)
			break;
	}
	return EXIT_SUCCESS;
}