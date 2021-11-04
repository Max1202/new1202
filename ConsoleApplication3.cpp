#include <iostream>
#include "windows.h"

	using namespace std;

	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		int x;
		cout << "Введіть номер дня тижня x: ";
		cin >> x;

		switch (x)
		{
		case 1: cout << "Понеділок: Підготовка до семінарів та практичних робіт"; break;
		case 2: cout << "Вівторок: О 19:00 тренування в спортзалі"; break;
		case 3: cout << "Середа: Додаткові заняття з англійської мови"; break;
		case 4: cout << "Четвер: О 18:00 тренування в спортзалі"; break;
		case 5: cout << "П'ятниця: Зустріч з друзями"; break;
		case 6: cout << "Субота: Вечір у колі родини"; break;
		case 7: cout << "Неділя: Зустріч з друзями о 19:00"; break;
		}
		system("pause");
		return 0;

	}

