#include <stdio.h>

int main(){
	int count;
	int line;
	
	for (line =0; line <5; line++){
		
		for(int space = 4; space >= line; space--) {
			
			printf(" ");
		}
		
		for(count=0; count < line*2 +1; count++ ){
			
			printf("*");
		}
		
		printf("\n");
	}
}
