#include <stdio.h>

int main() {
	int count[5];
	int i;
	
	printf("please input five integers : ");
	for (i =0 ; i < 5; i++ ) {
		scanf("%d", &count[i]);
	}
	
	printf("Odd numbers:");
	for (i =0 ; i < 5; i++ ) {
		if (count[i] % 2 !=0) {
			printf(" %d",count[i]);
		} 
	}
	 
	printf("\nEven numbers:");
	for (i =0 ; i < 5; i++ ) {
		if (count[i] % 2 ==0) {
			printf(" %d",count[i]);
		}
	}
}
