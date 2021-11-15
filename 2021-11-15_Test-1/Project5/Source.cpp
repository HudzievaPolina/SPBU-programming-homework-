#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int n = 0;
	int m = 0;
	cin >> n >> m;
	if (n > m)
	{
		int t = n;
		n = m;
		m = t;
	}
	int* arr = new int[n] { 0 };
	int* arrn = new int[n] { 0 };
	int* arrm = new int[m] { 0 };
	for (int i = 0; i < n; ++i)
	{
		cin >> arrn[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> arrm[i];
	}
	int k = 0;
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (arrn[i] == arrm[j])
				{
					arr[k] = arrn[i];
					++k;
				}
			}
		}
	}
	for (int i = 0; i < k; ++i)
	{
		for (int j = i; j < k; ++j)
			if (arr[j] < arr[i])
			{
				int p = arr[j];
				arr[j] = arr[i];
				arr[i] = p;
			}
	}
	for (int i = 0; i < k; ++i)
	{
		cout << arr[i];
	}
	delete[] arr;
	delete[] arrn;
	delete[] arrm;

	return EXIT_SUCCESS;
}

