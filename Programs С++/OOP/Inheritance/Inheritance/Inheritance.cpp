// Inheritance.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Наследование
using namespace std;
#include <iostream>

class Human
{
    string name;
public:
        // Методы
    // Сеттор имени
    void set_name(string name)
    {
        this->name = name;
    }
    // Геттер имени
    string get_name()
    {
        return name;
    }
};

class Student : public Human // Наследование от класса Human
{

public:
    string group;
        // Методы
    void Learn()
    {
        cout << "Я учусь! " << endl;
    }
};

// Extramural_student - заочный ученик
class Extramural_student : public Student // Наследование от класса Student
{
public:
    string group;
        // Методы
    // Переопределяем метод Learn, описанный в род. классе Student
    void Learn()
    {
        cout << "Я бываю в школе реже, чем обычный студент! " << endl;
    }
};

int main()
{
    setlocale(0, "rus");
    
    Student George;
    George.set_name("George");
    cout << George.get_name() << endl;
    George.Learn();
    

    Extramural_student Gleb;
    Gleb.Learn();
    Gleb.set_name("Gleb");
    cout << Gleb.get_name() <<  endl;

    return 0;
}
