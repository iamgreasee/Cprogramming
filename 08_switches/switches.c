#include <stdio.h> 

// switch - an alternative to using many if-else statement
// 	    more efficient with fixed integer values 

int main() {

	//int dayOfWeek = 0; // easier to read than a ton of if-else statements 
			   // takes a variable or something that holds a value as a switch, then compares it to a case that represents a number 
	
	//printf("enter a number to represent a day of the week (1-7): ");
	//scanf("%d", &dayOfWeek);



	//switch(dayOfWeek){
	//	case 1: 
	//		printf("it is monday\n");	// not adding a 'break;' after the statement will cause the rest of the cases to be performed as well
	//		break;				// choosing '1' will cause the program to return: "its monday, its tuesday, its wednesday, etc"
	//	case 2:
	//		printf("its tuesday\n");
	//		break;
	//	case 3: 
	//		printf("it is wednesday\n"); 
	//		break; 
	//	case 4: 
	//		printf("it is thursday\n"); 
	//		break;
	//	case 5: 
	//		printf("it is friday\n"); 
	//		break;
	//	case 6: 
	//		printf("it is saturday\n"); 
	//		break; 
	//	case 7: 
	//		printf("it is sunday\n"); 
	//		break; 	 
	//	default: 
	//		printf("please only enter a number (1-7)\n");	// the default case acts as the 'else' statement. 
									// if the value doesn't match any of the statement, it defaults to returning the code
									// within the default case 
	//}
	
	char dayOfWeek = '\0';	// switch cases ALSO work with characters. 
	
	printf("enter the day of the week (M, T, W, R, F, S, U): "); 
	scanf("%c", &dayOfWeek); 

	switch(dayOfWeek){
		case 'M': 
			printf("it is monday, or the first day of the week\n"); 
			break; 
		case 'T': 
			printf("it is tuesday, or the second day of the week\n"); 
			break; 
		case 'W':
			printf("it is wednesday, or the third day of the week\n"); 
			break; 
		case 'R': 
			printf("it is thursday, or the fourth day of the week\n"); 
			break;
		case 'F': 
			printf("it is friday, or the fifth day of the week\n");
			break; 
		case 'S': 
			printf("it is saturday, or the sixth day of the week\n"); 
			break; 
		case 'U':
			printf("it is sunday, or the seventh/last day of the week\n"); 
			break;
		default: 
			printf("incorrect input\n");
			break; 

	}
	



	return 0; 
}
