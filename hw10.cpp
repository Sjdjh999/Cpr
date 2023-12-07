#include <stdio.h>
#include <string.h>

struct city {
	char name[20];
	char country[20];
	int population;
};

int main() {
	struct city arr[3];
	int i;
	
	printf("Input three cities: \n");
	for (i = 0; i <3; i++) {
		printf("Name> ");
		scanf(" %[^\n]s", arr[i].name, sizeof(arr[i].name));
		printf("Country> ");
		scanf(" %[^\n]s", arr[i].country, sizeof(arr[i].country));
		printf("Population> ");
		scanf(" %d", &arr[i].population);
	}
	
	printf("Printing the three cities: \n");
	for (i = 0;i<3;i++) {
		printf("%s in %s with a population of %d people \n",arr[i].name, arr[i].country,arr[i].population);
	}
	return 0;
}
