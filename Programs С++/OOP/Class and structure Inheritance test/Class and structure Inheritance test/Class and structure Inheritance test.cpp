// Class and structure Inheritance test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class MyClass
{
public:

    virtual void whoAmI()
    {
        cout << "Я класс!" << endl;
    }
private:

};

struct MyStruct : public MyClass
{
    void whoAmI() override
    {
        cout << "Я структура, унаследованная от класса!" << endl;
    }
};

struct MyStruct2
{
    virtual void whoAmI()
    {
        cout << "Я структура!" << endl;
    }
};

class MyClass2 : public MyStruct2
{
public:
    void whoAmI() override
    {
        cout << "Я класс, унаследованный от структуры!" << endl;
    }

private:

};

int main()
{
    setlocale(0, "rus");
    MyClass b;
    b.whoAmI();

    MyStruct a;
    a.whoAmI();

    MyStruct2 c;
    c.whoAmI();
    
    MyClass2 d;
    d.whoAmI();

    return 0;
}
