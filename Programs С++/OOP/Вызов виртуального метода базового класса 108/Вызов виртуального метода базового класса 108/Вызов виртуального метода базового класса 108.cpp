// Вызов виртуального метода базового класса 108.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Message
{
	string message;

public:
	Message(string message)
	{
		this->message = message;
	}

	virtual string getMessage()
	{
		return message;
	}
};

class MessageInBrackets : public Message
{
public:

	MessageInBrackets(string message) : Message(message)
	{

	}

	string getMessage() override /*Метод заключающий результат работы родительского класса getMessage в []*/
	// Он не будет работать, т.к. компилятор будет вызывать перегруженный (данный) метод родительского класса.
	//
	// Это происходит из-за того, что виртуальный и перегруженный методы имеют однинаковые имена
	//
	// Чтобы решить эту проблему, необходимо явно указать, какой метод вызывается.
	// Для этого необходимо использовать следующий синтаксис:
	// ::Имя класса, чей метод необходимо вызвать::Имя вызываемого метода 
	{
		return "["+ ::Message::getMessage() + "]";
	}
};


class Printer
{
public:
	void print(Message *message)
	{
		cout << message->getMessage() << endl;
	}
};


int main()
{
	setlocale(0, "rus");

	Message msg1("Сообщение");

	Printer printer1;

	printer1.print(&msg1);

	MessageInBrackets msg2(" Сообщение в скобках");

	printer1.print(&msg2);

    return 0;
}