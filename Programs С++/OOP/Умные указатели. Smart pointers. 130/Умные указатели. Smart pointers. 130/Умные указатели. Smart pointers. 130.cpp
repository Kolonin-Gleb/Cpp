// Умные указатели. Smart pointers. 130.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

template<typename T>
class SmartPointer
{
public:
	
	SmartPointer(T *ptr) // Конструктор, необходимый для определения типа данных умного указателя
	{
		cout << "Constructor called" << endl;
		this->ptr = ptr;
	}

	~SmartPointer() // Деструктор, необходимый для очистки памяти, занятой умным указателем
	{
		cout << "Destructor called" << endl;
		delete ptr;
	}

	// Перегрузка опрератора * необходима умному указателю, чтобы его можно было использовать
	// как обычный указатель (разыменовывать и т.д.)
	T& operator*() 
	{
		return *ptr;
	}

private:

	T* ptr; // Указатель, который сможет указывать на всё, что угодно.
};


int main()
{
	setlocale(0, "rus");

	SmartPointer<int> sPointer = new int(7); 

	*sPointer = 24; // Изменяем число по адресу памяти

	cout << *sPointer << endl;

	return 0;
}
