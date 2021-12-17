#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student // Ученик
{
	string name;
	int age;
	int mark;
	int student_id; // Номер ученика

public:
	static int student_count; // Счётчик учеников

		// Прототипы конструкторов класса
	Student(); // Конструктор по умолчанию (Без аргументов)
	Student(string name, int age, int mark); // Конструктор принимающий аргументы пользователя

		// Прототипы методов класса
	void get_student_info();

};
