#include <stdio.h>

int main () {
	int arr1[6] = {1,2,3,4,5,6};
	int arr2[6] = {7,8,9,10,11,12};
	int* parr1 = &arr1[0];
	int* parr2 = &arr2[0];
	int i, temp;
	
	printf("arr1: ");
	for (i =0; i< 6; i++) {
		printf(" %d", arr1[i]);
	}
	printf("\narr2: ");
	for (i =0; i< 6; i++) {
		printf(" %d", arr2[i]);
	}
	
	for (i = 0 ; i < 6; i++){
		temp = *parr1;
		*parr1 = *parr2;
		*parr2 = temp;
		*parr1++;
		*parr2++;
	}
	
	printf("\nafter swap");
	printf("\narr1: ");
	for (i =0; i< 6; i++) {
		printf(" %d", arr1[i]);
	}
	printf("\narr2: ");
	for (i =0; i< 6; i++) {
		printf(" %d", arr2[i]);
	}
	
	
}
