// Виртуальные методы класса. Ключевые слова virtual и override.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Gun
{
public:
    virtual void shot()
    {
        cout << "BANG!" << endl;
    }
};

class Pistol : public Gun
{
public:
    void shot() override // Это перегруженный метод
    {
        cout << "bang!" << endl;
    }
};

class MachineGun : public Gun
{
public:
    void shot()  // Это самостоятельный метод
    {
        cout << "BANG! BANG! BANG!" << endl;
    }
};

class AK : public Gun
{
public:
    void shot()  // Это самостоятельный метод
    {
        cout << "BANG! BANG! BANG!" << endl;
        cout << "BANG! BANG! BANG!" << endl;

    }
};

class Soldier
{
public:
    // Солдат не может стрелять из пальцев,
    // поэтому ему необходимо держать оружие
    void shoot(Gun * someGun)
    {
        someGun->shot();
    }
};

int main()
{
    setlocale(0, "rus");

                                        /* Перемер работы методов*/
    //cout << "Cтрельба из оружия: " << endl;
    //Gun someGun;
    //someGun.shot();
    //cout << endl;
    //cout << "Cтрельба из пистолета: " << endl;
    //Pistol pistol1911;
    //pistol1911.shot();
    //cout << endl;
    //cout << "Cтрельба из автомата: " << endl;
    //Machinegun scar_l;
    //scar_l.shot(10);
    //cout << endl;
        
                                        /*Работа с указателями*/
    //Gun gun;
    //Pistol Five_seveN;
    //
    //Gun* weapon = &gun;
    //// Указатель хранит объект класса Gun => будет вызван метод shoot() реализованный в классе Gun
    //weapon->shot();
    //cout << endl;
    //
    //Gun* weapon1 = &Five_seveN;
    //// Указатель хранит объект класса Pistol => будет вызван метод shoot() реализованный в классе Pistol
    //weapon1->shot();
    //cout << endl;
    //
    //cout << "________________________________________________________________________________________" << endl << endl;
    //
    //MachineGun machineGun;
    //AK AK47;
    //
    //
    //MachineGun* weapon3 = &machineGun;
    //// Указатель хранит объект класса Machinegun => будет вызван метод shoot() реализованный в классе Machinegun
    //weapon3->shot();
    //cout << endl;
    //
    //MachineGun* weapon4 = &AK47;
    //// Указатель хранит объект класса AK, однако будет вызван метод shoot() реализованный в классе Machinegun,
    //// т.к. метод описанный в классе AK НЕ ЯВЛЯЕТСЯ ПЕРЕГРУЖЕННОЙ ВЕРСИЕЙ метода shoot() реализованного в классе Machinegun
    //weapon4->shot();
    //cout << endl;

                                        /*Смысл переопределения методов*/

    Pistol DesertEagle;
    MachineGun MP40;
    Soldier JohnWick;
    JohnWick.shoot(&DesertEagle);
    JohnWick.shoot(&MP40);
   

    return 0;
}
