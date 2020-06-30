#pragma once 

#include "place.h"

// Город
class City : public Place {
private:
	int population = 0.0f; // Население
protected:
	virtual void printInformation(std::ostream& out) const;
public:
	// Конструкторы
	City() : Place(), population(0) {}
	City(std::string _name, int _population)
		: Place(_name), population(_population) {}
	City(const City& _city) : Place(_city.getName()),
		population(_city.population) {}
	~City() { }; // Деструктор
	inline float getPopulation() const { return population; }
	inline void setPopulation(float _value) { population = _value; }
};
