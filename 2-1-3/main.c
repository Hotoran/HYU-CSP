#include<stdio.h>

void rotateLeft(int* pa, int* pb, int* pc) {
	int x;
	x = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = x;
}

void rotateRight(int* pa, int* pb, int* pc) {
	int x;
	x = *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = x;
}

int main(void) {
	int a = 10, b = 20, c = 30;
	printf("%d:%d:%d\n",a,b,c);
	int userInput;
	while (1) {
		scanf("%d", &userInput);
		if (userInput == 1) {
			rotateLeft(&a,&b,&c);
			printf("%d:%d:%d\n", a,b,c);
		}
		else if (userInput == 2) {
			rotateRight(&a,&b,&c);
			printf("%d:%d:%d\n",a,b,c);
		}
		else {break;}
	}

	return 0;
}

