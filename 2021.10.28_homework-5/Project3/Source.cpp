#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;

	a = a << 1;
	a = a >> 1;

	cout << a;

	return EXIT_SUCCESS;
}
