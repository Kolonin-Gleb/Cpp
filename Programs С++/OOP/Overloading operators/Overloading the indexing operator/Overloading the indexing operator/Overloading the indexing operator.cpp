// Overloading the indexing operator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Test_class
{
public:

    int& operator[] (int index)
    {
        return arr[index];
    }


private:
    int arr[5] {4, 6, 7, 9, 6};
};


int main()
{
    setlocale(0, "rus");

    Test_class a;
    cout << a[2] << endl;
    a[2] = 10;
    cout << a[2] << endl;


    return 0;
}
