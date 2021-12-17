// Is number simple or complex.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

bool isSimple(int num)
{
    if (num < 2)
    {
        return false;
    }

    if (num == 2 || num == 3)
    {
        return true;
    }

    for (int i = 2; i <= (sqrt(num)); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    setlocale(0, "rus");

    cout << "Введите число для проверки на простоту: ";
    int number;
    cin >> number;

    if (isSimple(number))
    {
        cout << "Число " << number << " простое!" << endl;
    }
    else
    {
        cout << "Число " << number << " сложное!" << endl;
    }

    return 0;
}
