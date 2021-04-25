//============================================================================================================================\\
//================================================Вежливый_Калькулятор_v.0.6==================================================\\
//============================================================================================================================\\

#include "pch.h"
#include <iostream>
#include <limits> 
#include <bitset>
#include <cstdlib>

using namespace std;

double a, b;
int vibor;
int net = 0;

void vibor_action() // Меню 
{
	cout << ">>Для использования стандартного калькулятора нажмите: 1\n";
	cout << ">>Для решения квадратных уравнений нажмите: 2\n";
	cout << ">>Для извлечения корней нажмите: 3\n";
	cout << ">>Для нахождения факториала нажмите: 4\n";
	cout << ">>Для перевода нажмите: 5\n";
	cout << ">>Для выхода нажмите: 6 \n";
	cout << ">>> ";
	cin >> vibor;
	if (vibor == 6) exit(1);
}
void check() // Проверка на дурака
{

	if (net < 3)
	{
		net++;
		cout << "ОШИБКА...\n";
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else  
	{
		net++;
		if (net < 42)
		{
			cout << "Хватит ломать мою программу. Я на тебя заяву накатаю. Ты ***********.";
			cout << "ОШИБКА...\n";
			cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			cout << "Ответ на главный вопрос жизни, вселенной и всего такого = 42" << endl;
			system("pause");
			exit(1);
		}
	}

}
void doing()
{
	cout << " Но для этого мне нужно два числа: a и b\n" << endl;
	cout << "Введите: a=";
	while (!(cin >> a))
	{
		check();
		std::cout << "Введите: a=";
	}
	cout << "Введите: b=";
	while (!(cin >> b))
	{
		check();
		std::cout << "Введите: b=";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double c, D, x1, x2, x3;
	int i = 0;
	int d, e, num, res, variant, var, perevod1, perevod2;
	bool schot = true;
	cout << " Я есть калькулятор. И Я приветствую тебя, Друг \n";
	cout << " Выбирите операцию:\n" << endl;
	vibor_action(); // Меню 
	
	while (schot == true)
	{
		if (i == 1)
		{
			cout << "Между первой и второй – промежуток небольшой:)\n" << endl;
			vibor_action();
		}
		if (i > 1)
		{
			cout << "Давай ещё:)\n" << endl;
			vibor_action();
		}
		i++;
		switch (vibor)
		{
		case 1:
			cout << " Вы выбрали стандартный калькулятор\n";
			cout << " Выбирете действие:\n";
			cout << "1.Сложение\n";
			cout << "2.Вычитание\n";
			cout << "3.Умножение\n";
			cout << "4.Деление\n";
			cout << "5.Возвести в степень\n";
			cout << "6.Вернуться к выбору\n";
			cout << "7.Выход\n";
			cout << ">>> ";
			cin >> variant;
			switch (variant) {
			case 1:
				cout << " Вы выбрали сложение...\n" << endl;
				doing();
				cout << " Ответ:" << a + b << "\n" << endl;
				break;
			case 2:
				cout << "Вы выбрали вычитание...\n" << endl;
				doing();
				cout << " Ответ:" << a - b << "\n" << endl;
				break;
			case 3:
				cout << "Вы выбрали умножение...\n" << endl;
				doing();
				cout << " Ответ:" << a * b << "\n" << endl;
				break;
			case 4:
				cout << "Вы выбрали деление...\n" << endl;
				doing();
				if (b == 0)
				{
					cout << "Нельзя делить на НОЛЬ!!!\n" << endl;
					break;

				}
				cout << " Ответ:" << a / b << "\n";
				break;
			case 5:
				cout << "Вы выбрали возведение в степень...\n " << endl;
				doing();
				cout << " Ответ:" << pow(a, b) << "\n" << endl;
				break;
			case 6:
				break;
			case 7:
				return 0;
			default:
				cout << "Ошибка...Пожалуйста, выберите ещё раз\n" << endl;
				break;
			}
			break;

		case 2:
			cout << " Вы выбрали решение квадратных уравнений\n";
			cout << " Но для этого мне нужно три числа: a, b и c\n";
			cout << "Введите: a=";
			while (!(cin >> a))
			{
				check();
				std::cout << "Введите: a=";
			}
			cout << "Введите: b=";
			while (!(cin >> b))
			{
				check();
				std::cout << "Введите: b=";
			}
			cout << "Введите: c=";
			while (!(cin >> c))
			{
				check();
				std::cout << "Введите: c=";
			}
			D = b * b - 4 * a * c;
			if (D > 0)
			{
				x1 = ((-b) + sqrt(D)) / (2 * a);
				x2 = ((-b) - sqrt(D)) / (2 * a);
				cout << "x1= " << x1 << "\n";
				cout << "x2= " << x2 << "\n";
			}
			if (D == 0)
			{
				x3 = -(b / (2 * a));
				cout << "x= " << x1 << "\n";
			}
			if (D < 0)
			{
				cout << " D < 0, Корней НЕТ\n" << endl;
			}
			break;
		case 3:
			cout << " Вы выбрали извлечение корней\n";
			cout << " Но для этого мне нужно два числа: a и d\n";
			cout << " Где a - это подкоренное число\n";
			cout << " А d - это показатель корня\n";
			cout << "Введите: a=";
			while (!(cin >> a))
			{
				check();
				std::cout << "Введите: a=";
			}
			cout << "Введите: d=";
			while (!(cin >> d))
			{
				check();
				std::cout << "Введите: d=";
			}
			if (a >= 0)
			{
				cout << "Ответ:" << pow(a, 1.0 / d) << "\n" << endl;
				break;
			}
			if (a < 0 && !(d % 2 == 0))
			{
				cout << "Ответ:" << -pow(-a, 1.0 / d) << "\n" << endl;
				break;
			}
			if (a < 0 && (d % 2 == 0))
			{
				cout << "Ошибка...Нельзя извлекать из отрицательного числа в чётной степени\n" << endl;
				break;
			}
			break;
		case 4:
			cout << " Вы выбрали нахождения факториала\n";
			cout << " Но для этого мне нужно одно число: d\n";
			cout << "Введите: d=";
			while (!(cin >> d))
			{
				check();
				std::cout << "Введите: d=";
			}
			res = 1;
			for (e = 1; e <= d; e++) 
			{
				res = res * e;
			}
			cout << "Ответ:" << res << "\n" << endl;
			break;
		case 5:
			cout << " Вы выбрали перевод\n";
			cout << " Но для этого мне нужно одно число: d\n";
			while (!(cin >> d))
			{
				check();
				std::cout << "Введите: d=";
			}
			cout << " Отлично!Выберите систему:\n";
			cout << "1.Двоичная\n";
			cout << "2.Восьмеричная\n";
			cout << "3.Шестнадцатеричная\n";
			cout << "4.Выход\n";
			cout << ">>> ";
			cin >> var;
			switch (var)
			{
			case 1:
				cout << "Вы выбрали двоичную...\n Ответ:" << bitset<numeric_limits<int>::digits>(d) << "\n" << endl;
				break;
			case 2:
				cout << "Вы выбрали восьмеричную...\n Ответ:" << oct << d << "\n" << endl;
				break;
			case 3:
				cout << "Вы выбрали шестнадцатьричную...\n Ответ:" << hex << d << "\n" << endl;
				break;
			case 4:
				return 0;
			default:
				cout << "Ошибка...Пожалуйста, выберите ещё раз\n" << endl;
				break;
			}
			break;
		default:
			check();
		}
	}
	
}
