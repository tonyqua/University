#include<iostream>

int main() {
	setlocale(0, "");
	int x, y, z;
	std::cin >> x >> y >> z;
	if (x < y && x < z) {
		std::cout << "Найменше число: " << x;
	}
	else if (y < x && y < z) {
		std::cout << "Найменше число: " << y;
	}
	else {
		std::cout << "Найменше число: " << z;
	}

	return 0;
}