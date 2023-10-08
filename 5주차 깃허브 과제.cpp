#include <stdio.h>

int main() {
	int data;
	
	printf("Please enter a number:");
	scanf("%d",&data);
	
	if(data %2 == 0 || data%3 ==0 || data %5==0|| data%7 ==0) {
		printf("It is not a prime number");
	}
	else {
		printf("It is a prime number");
	}
}
