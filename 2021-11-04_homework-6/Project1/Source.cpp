#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int capacity = 5;
	int* a = new int[capacity] {0, 0, 0, 0, 0};
	bool exit = false;
	int b = 0;

	while (!exit)
	{
		cout << "_____menu_____" << endl;
		cout << "0 - exit" << endl;
		cout << "1 - current state of the array" << endl;
		cout << "2 - add an element to the end" << endl;
		cout << "3 - add an element to the beginning" << endl;
		cout << "4 - delete an element from the end" << endl;
		cout << "5 - delete an element from the beginning" << endl;
		cout << "6 - reverse the array" << endl;
		
		int c = 0;
		cin >> c;
		switch (c)
		{
		case 0:
			exit = true;
			break;

		case 1:
			for (int i = 0; i < capacity; ++i)
			{
				cout << a[i] << endl;
			}
			break;

		case 2:
			cin >> b;
			if (a[capacity - 1] != 0)
			{
				capacity *= 2;
			}
			a[capacity - 1] = b;
			break;

		case 3:
			cin >> b;
			if (a[capacity - 1] != 0)
			{
				capacity *= 2;
			}
			for (int i = capacity; i > 0; --i)
			{
				a[i] = a[i - 1];
			}
			a[0] = b;
			break;

		case 4:
			a[capacity - 1] = 0;
			break;

		case 5:
			a[0] = 0;
			break;

		case 6:
			int *d = new int[capacity];
			for (int i = 0; i < capacity; ++i)
			{
				d[i] = a[capacity - 1 - i];
			}
			for (int i = 0; i < capacity; ++i)
			{
				a[i] = d[i];
			}
			break;

		}
	}

		
	
}