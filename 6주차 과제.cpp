#include <stdio.h>

int main()
{	
	int num =0;
	int count=0;
	int nb[32];
	int i=0;
	
	printf("please enter a number: ");
	scanf("%d",&num);
	
	for (i=0;num >=1;i++){
		nb[i]= num%2;
		num = num/2;
		count++;		
	} 

	for (i = count-1;i >= 0; i--) {
		printf("%d",nb[i]);
	}
	return 0;
	 
}
