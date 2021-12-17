#include "Student.h"


		// Реализации конструкторов класса 

// Конструктор принимающий аргументы пользователя
Student::Student(string name = "Unnamed", int age = 0, int mark = 0)
{
	this->name = name;
	this->age = age;
	this->mark = mark;
	this->student_count++;
	this->student_id = student_count;
}

// Конструктор по умолчанию (Без аргументов)
Student::Student()
{
	name = "Unnamed";
	age = 0;
	mark = 0;
	student_count++;
	student_id = student_count;
}

		// Реализации методов класса 
void Student::get_student_info()
{
	cout << "Имя ученика: " << name << endl;
	cout << "Возраст ученика: " << age << endl;
	cout << "Оценка ученика: " << mark << endl;
	cout << "id ученика: " << student_id << endl;
}