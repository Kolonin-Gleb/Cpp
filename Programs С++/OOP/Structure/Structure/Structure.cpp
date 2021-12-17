// Structure.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;



typedef struct 
{
	int age = 24;

	void info()
	{
		cout << age << endl;
	}
} Student;



int main()
{
	setlocale(0, "rus");

	Student b;
	
	b.info();




	return 0;
}
