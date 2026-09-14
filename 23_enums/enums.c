#include <stdio.h>

/*
enum Day{
	SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
*/ 
// OR 
typedef enum{
	MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
}Day;

typedef enum{
	SUCCESS, FAILURE, PENDING	
}Status;

void connectionStatus(Status status); 

int main() {

	// enum = (short for enumerations) a user-defined data type that consists 
	// 	  of a set of named integer constants. 
	// 	  benefit: replaces numbers with readable names. 
	// 
	// SUNDAY = 0; 
	// MONDAY = 1; 
	// TUESDAY = 2; 
	
	Day today = FRIDAY; 

	if(today == SUNDAY || today == SATURDAY){
		printf("its the weekend");
	}
	else{
		printf("its a weekday\n"); 
	}

	//printf("%d", today);	// will print 4
	
	Status status = FAILURE;
	
	connectionStatus(status);

	return 0; 
}

void connectionStatus(Status status){
	switch(status){
		case SUCCESS: 
			printf("connection was successful\n"); 
			break; 
		case FAILURE:
			printf("connection failed\n"); 
			break; 
		case PENDING: 
			printf("connection pending...\n"); 
			break; 
		default:
			printf("unknown\n"); 
			break;
	}
}
