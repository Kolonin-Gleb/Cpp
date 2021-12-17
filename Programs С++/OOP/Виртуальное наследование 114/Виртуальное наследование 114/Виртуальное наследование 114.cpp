// Виртуальное наследование 114.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ромбовидное наследование 114

#include <iostream>

using namespace std;

/*Программа, в которой всё работает корректно*/
//class Component
//{
//public:
//    string companyName;
//    Component(string companyName)
//    {
//        cout << "Конструктор Detail " << endl;
//        this->companyName = companyName;
//    }
//};
//
//class GPU : Component
//{
//public:
//    GPU(string companyName) : Component(companyName)
//    {
//        cout << "Конструктор GPU " << endl;
//    }
//
//};
//
//class Memory : public Component
//{
//public:
//
//    Memory(string companyName) : Component(companyName)
//    {
//        cout << "Конструктор Memory " << endl;
//    }
//};
//
//class GraphicCard : public GPU, public Memory
//{
//public:
//    GraphicCard(string companyName, string memoryCompanyName) : GPU(companyName), Memory(memoryCompanyName)
//    {
//        cout << "Конструктор GraphicCard " << endl;
//    }
//};
//
//int main()
//{
//    setlocale(0, "rus");
//
//    GraphicCard gc("AMD", "Samsung");
//
//
//
//    return 0;
//}


/*Программа, в которой возникают проблемы*/
// Проблема заключается в том, что Character имеет поле данных HP,
// которое по цепочке наследования появляется у всех классов.
// В итоге HP у OrcWarrior будет храниться в 2х местах, то есть произойдёт дублирование данных
/**/
// Чтобы избавиться от дублирования данных нужно, чтобы классы Orc и Warrior ссылались
// на один обект класса Character. Для этого необходимо использовать виртуальное наследование.
// В данном случае оно будет реализовано указанием ключевого слова virtual, после модификатора наследования
// у классов Orc и Warrior.

class Character
{
public:
	int HP;

	Character()
	{
		cout << "Конструктор Character" << endl;
	}
};

class Orc : public virtual Character
{
public:
	Orc()
	{
		cout << "Конструктор Orc" << endl;
	}
};

class Warrior : public virtual Character
{
public:
	Warrior()
	{
		cout << "Конструктор Warrior" << endl;
	}
};

class OrcWarrior : public Orc, public Warrior
{
public:
	OrcWarrior()
	{
		cout << "Конструктор OrcWarrior" << endl;
	}
};


int main()
{
	setlocale(0, "rus");

	OrcWarrior Nalan;

	return 0;
}