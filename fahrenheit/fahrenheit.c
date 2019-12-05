#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("%10s\t%9s\n", "Fahrenheit", "Celsius");

	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%8.0f°F\t%7.1f°C\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}
