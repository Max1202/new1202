#include <iostream>
#include "windows.h"

	using namespace std;

	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		int x;
		cout << "������ ����� ��� ����� x: ";
		cin >> x;

		switch (x)
		{
		case 1: cout << "��������: ϳ�������� �� ������� �� ���������� ����"; break;
		case 2: cout << "³������: � 19:00 ���������� � ��������"; break;
		case 3: cout << "������: �������� ������� � ��������� ����"; break;
		case 4: cout << "������: � 18:00 ���������� � ��������"; break;
		case 5: cout << "�'������: ������ � �������"; break;
		case 6: cout << "������: ����� � ��� ������"; break;
		case 7: cout << "�����: ������ � ������� � 19:00"; break;
		}
		system("pause");
		return 0;

	}

