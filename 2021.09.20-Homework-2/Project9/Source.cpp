#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;
	cin >> m >> n >> x >> y;

	if (x == 1)
	{
		if (y == 1)
		{
			cout << x + 1 << " " << y << endl;
			cout << x << " " << y + 1 << endl;
		}
		else
		{
			cout << x + 1 << " " << y << endl; 
			cout << x << " " << y + 1 << endl;
			cout << x << " " << y - 1 << endl; 
		}
	}
	else if (y == 1 && x != 1)
	{
		cout << x + 1 << " " << y << endl;
		cout << x << " " << y + 1 << endl; 
		cout << x - 1 << " " << y << endl;
	}
	if (x == 109)
	{
		if (y == 109)
		{
			cout << x - 1 << " " << y << endl;
			cout << x << " " << y - 1 << endl;
		}
		else
		{
			cout << x - 1 << " " << y << endl;
			cout << x << " " << y - 1 << endl;
			cout << x << " " << y + 1 << endl;
		}
	}
	else if (y == 109 && x != 109)
	{
		cout << x + 1 << " " << y << endl;
		cout << x << " " << y - 1 << endl;
		cout << x - 1 << " " << y << endl;
	}
	else
	{
		cout << x + 1 << " " << y << endl;
		cout << x << " " << y + 1 << endl;
		cout << x - 1 << " " << y << endl; 
		cout << x << " " << y - 1 << endl; 
	}
	return EXIT_SUCCESS;
}