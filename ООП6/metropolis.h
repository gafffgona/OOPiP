#pragma once
#include "city.h"

// Мегаполис
class Metropolis : public City {
private:
	int aglomerationSize = 0; // Алгломерация
protected:
	virtual void printInformation(std::ostream& out) const;
public:
	Metropolis() : City(), aglomerationSize(0.0f) {}
	Metropolis(std::string _name, float _population, float _aglomerationSize)
		: City(_name, _population), aglomerationSize(_aglomerationSize) {}
	Metropolis(const Metropolis& _metropolis)
		: City(_metropolis.getName(), _metropolis.getPopulation()), aglomerationSize(_metropolis.aglomerationSize) {}
	~Metropolis() { };
	inline float getФglomerationSize() const { return aglomerationSize; }
	inline void setФglomerationSize(float _value) { aglomerationSize = _value; }
};