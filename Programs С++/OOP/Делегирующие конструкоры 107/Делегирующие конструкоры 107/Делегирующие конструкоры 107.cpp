// Делегирующие конструкоры 107.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Human
{
	string name;
	int age;
	int weight;

public:

	Human() // Делегирующий конструктор, для конструктора Human(string name)
	{
		name = "Anonim";
		age = 0;
		weight = 0;
	}

	Human(string name) : Human() /* Делегирующий конструктор, для конструктора Human(string name, int age)*/
	// Использование делегирующего конструктора Human()
	// Сначала будет создан объект класса Human, поля которого будут заполнены значениями, 
	// указанными в делегирующем конструкторе, а потом значение поля name будет перезаписано,
	// согласно данному конструктору.
	{
		// С помощью делегерирующего конструктора можно легко поменять логику присвоения
		// значения какому либо полю во всех конструкторах, которые так или иначе используют его. 
		this->name = name + "!"; 
	}

	Human(string name, int age) : Human(name) // Делегирующий конструктор, для конструктора Human(string name, int age, int weight)
	{
		// В поле name, будет записано полученное значение при помощи конструктора Human(string name)
		this->age = age;
	}

	Human(string name, int age, int weight) : Human(name, age)
	{
		// Поля name и age будут записаны полученные значение при помощи конструктора Human(string name)
		this->weight = weight;
	}

	void info()
	{
		cout << name << endl;
		cout << age << endl;
		cout << weight << endl;
	}
};



int main()
{
    setlocale(0, "rus");

	Human man("Gleb", 15, 64);
	man.info();

    return 0;
}
