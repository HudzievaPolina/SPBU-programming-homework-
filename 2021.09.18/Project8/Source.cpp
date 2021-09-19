#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	cin >> a >> b >> c >> d >> e >> f;
	cout << d * 3600 + e * 60 + f - a * 3600 - b * 60 - c << endl;

	return EXIT_SUCCESS;
}