#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int n = 0;
	int* arr = new int[n] { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int min = arr[0];
	int max = arr[0];

	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i];
	}
	delete[] arr;

	return EXIT_SUCCESS;
}