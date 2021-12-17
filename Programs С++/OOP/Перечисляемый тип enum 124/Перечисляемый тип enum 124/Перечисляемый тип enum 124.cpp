// Перечисляемый тип enum 124.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class PC
{
public:
	enum PCState
	{
		OFF,
		ON,
		SLEEP,
	};

	void setState(PCState state)
	{
		this->state = state;
	}
	PCState getState()
	{
		return state;
	}
private:
	PCState state;
};


enum Speed
{
	MIN = 100,
	MAX = 100,
};

int main()
{
	setlocale(0, "rus");

	cout << MIN << endl;
	cout << MAX << endl;


	PC pc;
	pc.setState(PC::PCState::ON);


	/*if (pc.getState() == PCState::ON)
	{
		cout << "ПК включён" << endl;
	}
	else if (pc.getState() == PCState::OFF)
	{
		cout << "ПК выключен" << endl;
	}
	else if (pc.getState() == PCState::SLEEP)
	{
		cout << "ПК спит" << endl;
	}*/

	switch (pc.getState())
	{
	case PC::PCState::ON:
		cout << "ПК включён" << endl;
		break;
	case PC::PCState::OFF:
		cout << "ПК выключен" << endl;
		break;
	case PC::PCState::SLEEP:
		cout << "ПК спит" << endl;
		break;

	default:
		break;
	}

	return 0;
}
