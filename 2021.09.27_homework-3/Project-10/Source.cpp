#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	
	for (int i = a; i <= b; ++i)
	{
		for (int j = 0; j <= i; ++j)
			if (j * j == i)
			{
				cout << i << endl;
			}
	}
	return EXIT_SUCCESS;
}