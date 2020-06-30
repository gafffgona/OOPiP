#pragma once
#include "place.h"

// Штат
class State : public Place {
private:
	int cityCount = 0; // Количество городов
protected:
	virtual void printInformation(std::ostream& out) const;
public:
	State() : Place(), cityCount(0) {}
	State(std::string _name, int _cityCount)
		: Place(_name), cityCount(_cityCount) {}
	State(const State& _state) : Place(_state.getName()), cityCount(_state.cityCount) {}
	~State() { };
	inline float getCityCount() const { return cityCount; }
	inline void setCityCount(int _cityCount) { cityCount = _cityCount; }
};