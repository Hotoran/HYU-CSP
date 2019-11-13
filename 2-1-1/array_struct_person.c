#include<stdio.h>
#include<string.h>

typedef struct {
	char name[10];
	int age;
} Person;

int main(void) {
	Person persons[3];
	for (int i = 0; i < 3; i++) {
		scanf("%s %d", persons[i].name , &persons[i].age);
	}
	for (int i = 0; i < 3; i++) {
		printf("Name:%s, Age:%d\n", persons[i].name , persons[i].age);
	}
	return 0;
}


