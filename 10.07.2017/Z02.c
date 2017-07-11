#include <conio.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	int num = 0;
	double sum = 0.0;

	do {
		printf("Input n: ");
		scanf_s("%d", &num);
		if (num <= 0)
			printf("Wrong input! Pleace repeat!\n");
	} while (num <= 0);

	for (int i = 1; i <= num; i++) {
		double subsum = 1.0;
		for (int j = i; j > 0; j--)
			subsum /= j;

		sum += subsum;
	}

	printf("Summ is: %f\n", sum);

	_getch();
	return 0;
}