#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "good.h"

void Good::allocName(const char* _name) { // Выделяем память
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

Good::Good() { // Конструктор без параметров
	allocName("Untitled");
	std::cout << "Create class " << name << " without constructor parametrs." << std::endl;
}

Good::Good(const char* _name, int _count, float _cost) { // Конструктор с 3 параметрами
	allocName(_name);
	count = _count;
	cost = _cost;
	std::cout << "Create class " << name << " with 3 constructor parametrs." << std::endl;
}

Good::Good(const Good& _Good) { // Конструктор копирования
	allocName(_Good.name);
	count = _Good.count;
	cost = _Good.cost;
	std::cout << "Create class " << name << " with copy constructor." << std::endl;
}

Good::~Good() { // Деструктор
	std::cout << "Call Good class \"" << name << "\" desctructor." << std::endl;
	delete[] name;
}

void Good::print() { // Вывод
	std::cout << "\nName: " << name <<
				 "\nCount: " << count <<
				 "\nCost: " << cost << "$\n" << std::endl;
}
