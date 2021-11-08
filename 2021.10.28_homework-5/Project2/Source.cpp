#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a = 0;
	cin >> a;
	int value = *((int*)&a);

	for (int i = 0; i < sizeof(double) * 8; ++i)
	{
		int bitMask = 1 << (sizeof(double) * 8 - 1 - i);
		int bit = (value & bitMask) >> (sizeof(double) * 8 - 1 - i);
		cout << bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	return EXIT_SUCCESS;
}