#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int k = 0;
	cin >> k;
	int *arr = new int[k] { 0 };


	for (int i = 0; i < k; ++i)
	{
		int n = 0;
		int m = 0;
		cin >> n >> m;
		arr[i] = 19 * m + (n + 239) * (n + 366) / 2;
		}
	for (int i = 0; i < k; ++i)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;

	return EXIT_SUCCESS;
}