// OOP example of encapsulation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Инкапсуляция - сокрытие одних данных от других

#include <iostream>
#include <ctime>

using namespace std;


class Coffee_Grinder
{
    bool Check_Battery()
    {
        
        // Установка заряда
        int Battery_charge = rand() % 3;
        if (Battery_charge == 0) // типа проверка на наличие зарядки
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    void Start()
    {
        if (Check_Battery()) // если Check_Battery() вернет true
        {
            cout << "Кофе готовится... " << endl;
        }
        else
        {
            cout << "Аккамулятор разряжен! " << endl;
        }
    }

};

int main()
{
    srand(time(0));
    setlocale(0, "rus");

    Coffee_Grinder my_machine;

    my_machine.Start();

    return 0;
}
