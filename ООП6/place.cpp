#pragma once
#include "place.h"
#include "state.h"
#include "city.h"
#include "metropolis.h"

Place* Place::begin = nullptr;
Place* Place::back = nullptr;
unsigned int Place::placeListSize = 0;

void Place::AddToList() {
	if (begin == nullptr) {
		begin = this;
		back = this;
		placeListSize = 1;
	}
	else {
		back->next = this;
		back = this;
		placeListSize++;
	}
}

void Place::ShowList() {
	Place* element = begin;
	for (int i = 0; i < placeListSize; i++) {
		std::cout << *element;
		element = element->next;
	}
	std::cout << std::endl;
}


void Place::printInformation(std::ostream& out) const {
	out << "\nName: " << name << "\n";
}

void City::printInformation(std::ostream& out) const {
	Place::printInformation(out);
	out << "Population: " << population << " peoples\n";
}

void State::printInformation(std::ostream& out) const {
	Place::printInformation(out);
	out << "Cities: " << cityCount << "\n";
}

void Metropolis::printInformation(std::ostream& out) const {
	City::printInformation(out);
	out << "Aglomeration: " << aglomerationSize << " cities\n";
}

std::ostream& operator<<(std::ostream& out, const Place& _place) {
	_place.printInformation(out);
	return out;
}
