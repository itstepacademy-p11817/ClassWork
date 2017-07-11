#include <conio.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	int kol = 0;

	for (int i = 0; i <= 999999; i++) {
		int dec = 10;
		int sum1 = 0;
		int temp = i;
		for (int j = 0; j < 3; j++) {
			sum1 += temp % dec;
			temp /= dec;
		}

		int sum2 = 0;
		for (int j = 0; j < 3; j++) {
			sum2 += temp % dec;
			temp /= 10;
		}

		if (sum1 == sum2) {
			printf("Happy number: %d.\n", i);
			kol++;
		}
	}
	printf("Total number: %d.\n", kol);

	_getch();
	return 0;
}