// OOP Begin.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Human
{
    string name;
    int age;
public:
    
    void Info()
    {
        cout << "Качества человека: " << endl;
        cout << "Имя " << name << " Возраст " << age << endl;
    }
    void Set_name()
    {
        string user_name;
        cout << "Введите имя: ";
        cin >> user_name;
        
        name = user_name;
    }
    void Set_age()
    {
        int user_age = 0;
        cout << "Введите возраст: ";
        cin >> user_age;
        
        age = user_age;
    }
};


int main()
{
    setlocale(0, "rus");

    Human programmer;



    cout << "Создание человека " << endl;
    programmer.Set_age();
    programmer.Set_name();

    programmer.Info();


    return 0;
}