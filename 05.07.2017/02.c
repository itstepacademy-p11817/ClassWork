#include <conio.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	int ch = 0;
	int currency;
	double course;

	while (true) {
		printf("Input currency you have: ");
		scanf_s("%d", &currency);
		printf("Input curent course: ");
		scanf_s("%le", &course);

		printf("You have %.2f local money.\n", currency*course);

		printf("0 - for exit, 1 - for continue.\n");
		scanf_s("%d", &ch);

		if (ch == 0)
			break;
	}

	printf("End!");
	_getch();

	return 0;
}