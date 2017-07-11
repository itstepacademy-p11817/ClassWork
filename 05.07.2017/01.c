#include <conio.h>
#include <stdio.h>

int main() {
	int leng = 0;
	int height = 0;

	printf("Input leng: ");
	scanf_s("%d", &leng);
	printf("Input heignt: ");
	scanf_s("%d", &height);

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < leng; j++) {
			if (i > 0 && i < height - 1 && j > 0 && j < leng - 1) {
				printf(" ");
				continue;
			}
			printf("#");
		}
		printf("\n");
	}

	_getch();

	return 0;
}