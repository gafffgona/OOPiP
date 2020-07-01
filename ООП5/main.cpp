#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "good.h"
int main() {
	Good* Good1 = new Good("Toy", 200, 10);
	Good Good2;
	Good Good3(*Good1);

	Good1->print();
	Good2.print();
	Good3.print();

	delete(Good1);

	return 0;
}
