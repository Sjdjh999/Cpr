#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int data1, data2;

	printf("Input two intergers: ");
	scanf("%d %d", &data1, &data2);

	printf("%d & %d = %d \n", data1, data2, data1 & data2);
	printf("%d | %d = %d \n", data1, data2, data1 | data2);
	printf("%d ^ %d = %d \n", data1, data2, data1 ^ data2);
	
}
