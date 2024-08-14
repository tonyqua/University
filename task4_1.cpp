#include<iostream>
#include<cmath>

double func(int z, double x) {
	std::cout << "Îáåðiòü ôóíêöi¿ âiä 1 äî 3: ";
	std::cin >> z;
	switch (z) {
	case 1:
		std::cin >> x;
		return 10e-3 + sin(pow(x, 3));
		break;
	case 2:
		std::cin >> x;
		return sqrt(1 + x) + pow(sin(x), 2);
		break;
	case 3:
		std::cin >> x;
		return log10(1 / x + sqrt(x));
		break;
	default:
		std::cout << "Îáåðiòü âiä 1 äî 3.";
		return 1;
	}
}

int main() {
	setlocale(0, "");

	short int z = 0;
	double x = 0, y;
	
	y = func(z, x);
	std::cout << y;

	return 0;
}

