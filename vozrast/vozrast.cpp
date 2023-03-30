#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    int day, year;
    string month;
    cout << "Введите дату Вашего рождения (месяц на русском языке): ";
    cin >> day >> month >> year;
    if (2023 - year > 18)
    {
        cout << "Вам есть 18 лет";
    }
    else if (2023 - year == 18)
    {
        if (month == "Январь" || month == "Февраль" || month == "январь" || month == "февраль")
        {
            cout << "Вам есть 18 лет";
        }
        else if (month == "march")
        {
            if (29 - day > 0)
            {
                cout << "Вам есть 18 лет";
            }
            else
            {
                cout << "Вам нет 18 лет";
            }
        }
        else
        {
            cout << "Вам нет 18 лет";
        }
    }
    else
    {
        cout << "Вам нет 18 лет";
    }
    cout << endl;
    system("PAUSE");
    return 0;
}