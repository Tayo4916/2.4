// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int k, n, z, g;
    cout << "Введите число от 1 до 365 включительно." << endl;
    cin >> k;
    if (1 <= k && k <= 365) {
        z = floor(k / 7);
        cout << "В соответствии с введенным количеством дней это " << z << " полных недель.\n";
        g = k % 7;
        cout << "Введенный день года это " << g << "-й день недели и это ";
        if (g == 1)
            cout << "Ponedelnik\n";
        else if (g == 2)
            cout << "Vtornik\n";
        else if (g == 3)
            cout << "Sreda\n";
        else if (g == 4)
            cout << "Chetverg\n";
        else if (g == 5)
            cout << "Pyatnica\n";
        else if (g == 6)
            cout << "Subbota\n";
        else if (g == 0)
            cout << "Voskresenye\n";
        else
            cout << "Такого дня нет.";

    }
    else
        cout << "Вы ввели число из-за пределов данного интервала.";
    _getch();
}
