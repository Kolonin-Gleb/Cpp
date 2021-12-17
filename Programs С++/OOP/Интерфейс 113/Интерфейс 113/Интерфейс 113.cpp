// Интерфейс 113.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class IBycicle // Интерфейс
{
public:
	virtual void spinWheel() = 0;
	virtual void spinPedals() = 0;
	virtual void jump() = 0;
};

class SimpleBycicle : public IBycicle
{
public:
	void spinWheel() override
	{

	}
	void spinPedals() override
	{
		cout << "Еду со скоростью 20 км/ч" << endl;
	}
	void jump() override // Наданном велосипеде нельзя прыгать
	{

	}
};

class SportBycicle : public IBycicle
{
public:
	void spinWheel() override
	{

	}
	void spinPedals() override
	{
		cout << "Еду со скоростью 40 км/ч" << endl;
	}
	void jump()
	{
		cout << "Прыгаю" << endl;
	}
};

class Human
{
public:

	void rideOn(IBycicle& bycicle)
	{
		cout << "Кручу руль" << endl;
		bycicle.spinWheel();
		cout << "Кручу педали" << endl;
		bycicle.spinPedals();
	}
};

int main()
{
	setlocale(0, "rus");

	SimpleBycicle bycicle;
	SportBycicle bmx;

	Human Gleb;

	Gleb.rideOn(bycicle);

	cout << endl;
	cout << "Слезаю с велосипеда" << endl;
	cout << endl;

	Gleb.rideOn(bmx);
	bmx.jump();

	return 0;
}
