// Test Re-declaring a dynamic variable.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    setlocale(0, "rus");
    
    const int length = 10;

    int* array = new int[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = i;
        cout << array[i] << "\t";
    }
    delete[] array;

    /*int* array = new int[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = -i;
        cout << array[i] << "\t";
    }
    delete[] array;*/

    return 0;
}
