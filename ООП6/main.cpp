#include <iostream>
#include "place.h"
#include "state.h"
#include "city.h"
#include "metropolis.h"

int main() {
	Place place1("Hill");
	City place2("New York", 15000000);
	State place3("Texas", 650);
	Metropolis place4("San Francisco", 13000000, 450);
	place1.ShowList();
	return 0;
}
