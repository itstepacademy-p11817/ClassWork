#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int len = 500;
	int bgn = 1;
	int end = len;
	int unum = 0;
	int try = 0;

	srand(time(NULL));
	int num = rand() % len + 1;
	printf("Rand: %d.\n", num);
	unum = len / 2;
	printf("Comp [%d, %d]: %d.\n", bgn, end, unum);

	while (true) {
		try++;

		if (unum == num) {
			printf("Bingo! You got it!\n");
			printf("It took %d tryes.\n", try);
			break;
		}
		else if (unum < num) {
			bgn = unum + 1;
			unum = bgn + (end - bgn) / 2;
		}
		else if (unum > num) {
			end = unum - 1;
			unum = bgn + (end - bgn) / 2;
		}
		printf("Comp [%d, %d]: %d.\n", bgn, end, unum);
	}

	_getch();

	return 0;
}