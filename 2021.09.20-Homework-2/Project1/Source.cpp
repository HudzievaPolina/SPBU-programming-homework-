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
		cout << "���� �������" << endl;
	}
	switch (n / 100)
	{
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9: 
		cout << "��������� ";
		break;
	default:
		break;
	}
			
	switch (n % 100 / 10)
	{
	case 2:
		cout << "�������� ";
		break;
	case 3:
		cout << "�������� ";
		break;
	case 4:
		cout << "����� ";
		break;
	case 5:
		cout << "��������� ";
		break;
	case 6:
		cout << "���������� ";
		break;
	case 7:
		cout << "��������� ";
		break;
	case 8:
		cout << "����������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	default:
		break;
	}
	
	switch (n % 100)
	{
	case 10:
		cout << "������ �������" << endl;
		break;
	case 11:
		cout << "����������� �������" << endl;
		break;
	case 12:
		cout << "����������� �������" << endl;
		break;
	case 13:
		cout << "����������� �������" << endl;
		break;
	case 14:
		cout << "������������ �������" << endl;
		break;
	case 15:
		cout << "���������� �������" << endl;
		break;
	case 16:
		cout << "����������� �������" << endl;
		break;
	case 17:
		cout << "���������� �������" << endl;
		break;
	case 18:
		cout << "������������ �������" << endl;
		break;
	case 19:
		cout << "������������ �������" << endl;
		break;
	default:
		break;
	}

	if ((n % 100 >= 20) || (n % 100 < 10 && n != 0))
	{
		switch (n % 100 % 10)
		{
		case 1:
			cout << "���� �����" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "������ ������" << endl;
			break;
		case 5:
			cout << "���� �������" << endl;
			break;
		case 6:
			cout << "����� �������" << endl;
			break;
		case 7:
			cout << "���� �������" << endl;
			break;
		case 8:
			cout << "������ �������" << endl;
			break;
		case 9:
			cout << "������ �������" << endl;
			break;
		default :
			cout << "�������" << endl;
			break;
		}
	}
	return EXIT_SUCCESS;
}