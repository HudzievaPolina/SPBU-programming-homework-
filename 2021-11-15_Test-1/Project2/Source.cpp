#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int length = 0;
	cin >> length;
	int* arr = new int[length] { 0 };
	int min = 0;
	int max = 0;

	for (int i = 0; i < length; ++i)
	{
		cin >> arr[i];
	}
	min = arr[0];
	max = arr[1];

	for (int i = 0; i < length; ++i)
	{
		if (i % 2 == 0)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		else
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
	}
	cout << min + max;
	delete[] arr;

	return EXIT_SUCCESS;
}

