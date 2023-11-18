#include <stdio.h>
#include <math.h>

void math (int * num){
	int i;
	int add = 0;
	double average=0, total=0, result=0;
	
	
	
	for (i = 0; i<5 ; i++) {
		add += num[i];
	}
	average = add / 5;
	
	for (i = 0; i <5 ;i++) {
		num[i] -= average;
		total += pow(num[i],2) ;
	}
	result = sqrt(total/5);
	printf("Standard Deviation :%.3lf", result);
}

int main() {
	int arr[5];
	int i =0;
	
	printf("Enter 5 real numbers: ");
	for (i=0; i<5; i++) {
		scanf("%d",&arr[i]);
	}
	math(arr);
}
