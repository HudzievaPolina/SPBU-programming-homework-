#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	cin >> n;
	if (n == 0) 
	{
		cout << "ноль бананов" << endl;
	}
	switch (n / 100)
	{
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9: 
		cout << "девятьсот ";
		break;
	default:
		break;
	}
			
	switch (n % 100 / 10)
	{
	case 2:
		cout << "двадцать ";
		break;
	case 3:
		cout << "тридцать ";
		break;
	case 4:
		cout << "сорок ";
		break;
	case 5:
		cout << "пятьдесят ";
		break;
	case 6:
		cout << "шестьдесят ";
		break;
	case 7:
		cout << "семьдесят ";
		break;
	case 8:
		cout << "восемьдесят ";
		break;
	case 9:
		cout << "девяносто ";
		break;
	default:
		break;
	}
	
	switch (n % 100)
	{
	case 10:
		cout << "десять бананов" << endl;
		break;
	case 11:
		cout << "одиннадцать бананов" << endl;
		break;
	case 12:
		cout << "двеннадцать бананов" << endl;
		break;
	case 13:
		cout << "триннадцать бананов" << endl;
		break;
	case 14:
		cout << "четырнадцать бананов" << endl;
		break;
	case 15:
		cout << "пятнадцать бананов" << endl;
		break;
	case 16:
		cout << "шестнадцать бананов" << endl;
		break;
	case 17:
		cout << "семнадцать бананов" << endl;
		break;
	case 18:
		cout << "восемнадцать бананов" << endl;
		break;
	case 19:
		cout << "девятнадцать бананов" << endl;
		break;
	default:
		break;
	}

	if ((n % 100 >= 20) || (n % 100 < 10 && n != 0))
	{
		switch (n % 100 % 10)
		{
		case 1:
			cout << "один банан" << endl;
			break;
		case 2:
			cout << "два банана" << endl;
			break;
		case 3:
			cout << "три банана" << endl;
			break;
		case 4:
			cout << "четыре банана" << endl;
			break;
		case 5:
			cout << "пять бананов" << endl;
			break;
		case 6:
			cout << "шесть бананов" << endl;
			break;
		case 7:
			cout << "семь бананов" << endl;
			break;
		case 8:
			cout << "восемь бананов" << endl;
			break;
		case 9:
			cout << "девять бананов" << endl;
			break;
		default :
			cout << "бананов" << endl;
			break;
		}
	}
	return EXIT_SUCCESS;
}