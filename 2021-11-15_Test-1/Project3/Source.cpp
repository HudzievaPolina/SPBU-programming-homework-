#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	int result = 0;
	cin >> a >> b;

	if (a > b)
	{
		int t = b;
		b = a;
		a = t;
	}
	for (int i = b; i <= a * b; ++i)
	{
		if (i % a == 0 && i % b == 0)
		{
			result = i;
			break;
		}
	}
	cout << result;
	
	return EXIT_SUCCESS;
}