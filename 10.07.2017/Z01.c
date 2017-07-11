#include <conio.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	int bgn = 0;
	int end = 0;
	int num = 0;

	do {
		printf("Input begin: ");
		scanf_s("%d", &bgn);

		printf("Input end: ");
		scanf_s("%d", &end);
	} while (end < bgn);

	do {
		printf("Input number: ");
		scanf_s("%d", &num);

		if (num >= bgn && num <= end) {
			printf("You got it!\n");
			break;
		}
		else
			printf("Wrong input!\n");
	} while (true);

	_getch();
	return 0;
}