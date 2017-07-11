#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int unum = 0;
	int try = 0;
	
	time_t starttime = time(NULL);
	srand(time(NULL));
	int num = rand() % 500 + 1;

	while (true) {
		printf("Input your number or 0 for exit: ");
		scanf_s("%d", &unum);
		
		try++;
		if (unum == num || unum == 0) {
			if (unum != 0)
				printf("Bingo! You got it!\n");
			int seconds = time(NULL) - starttime;
			printf("Game took %d seconds and you use %d tryes.\n", seconds, try);
			break;
		}
		else {
			if (unum > num)
				printf("Your number is bigger.\n");
			else
				printf("Your number is less.\n");
		}
	}

	_getch();

	return 0;
}