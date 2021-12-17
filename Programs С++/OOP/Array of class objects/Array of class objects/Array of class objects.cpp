// Array of class objects.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
// Классы 
#include "Student.h" // Студент
// Файл со всеми функциями
#include "Functions.h"

// Перед началом программы говорим, что количество учеников = 0
int Student::student_count = 0;

int main()
{
    setlocale(0, "rus");
    
    int array_size = 0;

    cout << "Введите количество учеников: ";
    cin >> array_size;
    cout << endl;

    Student *array_of_students = new Student[array_size];

    cout << "Вы хотите ввести информацию об этих учениках? " << endl;
    cout << "1 - Да, 0 - Нет" << endl;
    bool information;
    cin >> information;

    if (information == 1)
    {
        cout << "Введит номер ученика, информация о котором будет внесена: " << endl;
    }
    else
    {
        cout << "Вот информация об этих учениках: " << endl;
        info_about_all_students(array_of_students, array_size);
    }

    delete[] array_of_students;

    return 0;
}
