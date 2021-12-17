// Abstract class Full virtual function 104.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Абстрактные классы Чисто виртуальные функции

#include <iostream>
#include <string>
using namespace std;

class Weapon // Абстрактный класс
{
public:
	virtual void Shoot() = 0; // чисто виртуальная функция

};

class Gun : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BANG!" << endl;
	}
};

class SubmachineGun :public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka :public Weapon
{
public:
	void Shoot() override
	{
		cout << "BADABUB!!!" << endl;
	}
};

class Knife :public Weapon
{
public:
	void Shoot() // override
	{
		cout << "VJUH!!!" << endl;
	}

	void Shoot(int a)
	{
		cout << "VJUH!!!" << endl;
	}
};

class Player
{
public:
	void Shoot(Weapon* weapon)
	{
		weapon->Shoot();
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Gun gun;
	SubmachineGun machinegun;
	Bazooka bazooka;
	Knife knife;
	Player player;

	player.Shoot(&knife);

	return 0;
}