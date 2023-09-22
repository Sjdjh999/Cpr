#include <stdio.h>

int main() {
	double data ;
	double result; 
	
	printf("please enter kilometers : ");
	scanf("%lf", &data);
	result = data / 1.609;
	
	printf("%.1f km is equal to %.1f miles", data,result);
	return 0;
	
}
