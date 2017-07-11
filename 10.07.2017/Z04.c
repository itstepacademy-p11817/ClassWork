#include <conio.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Goods:\n");
	printf("-1 - Exit and total.\n");
	printf(" 0 - Finish client.\n"); 
	printf(" 1 - Chainsaw (1300$).\n");
	printf(" 2 - Hammer (110$).\n");
	printf(" 3 - Pins (10$).\n");
	printf(" 4 - Shovel (55$).\n");
	printf(" 5 - Discount.\n");
	printf(" 6 - Next client.\n");

	int subcheck = 0;
	int rec = 0;
	while (true) {
		int ch = -1;
		
		printf("Input chioce: ");
		scanf_s("%d", &ch);

		switch (ch) {
		case 1: subcheck += 1300;
			break;
		case 2: subcheck += 110;
			break;
		case 3: subcheck += 10;
			break;
		case 4: subcheck += 55;
			break;
		case 5: printf("Input discount: ");
			int disc = 0;
			scanf_s("%d", &disc);
			subcheck = subcheck - subcheck*disc / 100;
			break;
		case 6: subcheck = 0;
			break;
		case 0: rec += subcheck;
			printf("Your check: %d\n", subcheck);
			subcheck = 0;
			break;
		case -1:
			break;
		default: printf("Wrong input.\n");
			break;
		}
		if (ch == -1)
			break;
	}

	printf("Shop`s profit: %d.\n", rec);
	printf("Bye!");

	_getch();
	return 0;
}