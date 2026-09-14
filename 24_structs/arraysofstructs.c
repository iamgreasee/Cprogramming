#include <stdio.h>
#include <string.h> 

// array of structs = array where each element contains a struct {}
// 		      helps organize and groups together related data 

struct Car{
	char model[25]; 
	int year; 
	int price;
};

int main() {

	struct Car cars[] = {{"Mustang", 2026, 32000}, {"corvette", 2026, 68000}, {"challenger", 2024, 29000}};

	//printf("%s %d $%d\n", cars[0].model, cars[0].year, cars[0].price);
	
	int size = sizeof(cars) / sizeof(cars[0]);

	for(int i = 0; i < size; i=i+1){
		printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
	}

	return 0; 
}
