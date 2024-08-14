#include<iostream>
#include<cmath>


double calculateY(double x, double r, double s, double k) {
	if (x == r * s) {
		return 1.0 / tan(pow(x * exp(3 * k), 2)) + log(fabs(r * x));
	}
	else if (x > r * s) {
		return pow(x * x, 1.0 / 5) + sqrt(fabs(sin(k)));
	}
	else {
		return tan(k * x + tan(r * s));
	}
}

int main() {
	const double r = 2.4;
	const double s = 5;
	const double k = 0.5;
	double x;
	std::cin >> x;

	double y = calculateY(x, r, s, k);

	std::cout << y;

	return 0;
}