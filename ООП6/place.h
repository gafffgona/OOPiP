#pragma once 

#include <cstring>
#include <iostream>

// Базовый класс
class Place {
private:
	std::string name; // Название
protected:
	virtual void printInformation(std::ostream& out) const; // Вывод информации
	virtual void AddToList(); // Добавление в список
public:
	Place() : name("Unnamed") { AddToList(); } // Контсруктор без параметров
	Place(std::string _name) : name(_name) { AddToList(); } // С 1 параметром
	Place(const Place& _place) : name(_place.name) { AddToList(); } // Копирования
	virtual ~Place() { }; // Виртуальный деструктор
	static Place* begin; // Начало списка
	static Place* back; // Конец списка
	Place* next; // Следующий элемент
	static unsigned int placeListSize; // Размер списка
	void ShowList(); // Показать список
	inline std::string getName() const { return name; } // Вернуть имя
	inline void setName(std::string _name) { name = _name; } // Задать имя
	friend std::ostream& operator<<(std::ostream& out, const Place& _place); // Вывод в поток
};