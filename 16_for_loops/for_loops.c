#include <stdio.h> 
#include <unistd.h> 


int example(); 


int main() {

	// for loop = repeat some code a limited number of times 
	// 	      for(Initialization; Condidion; Update)
	
	//for(int i = 0; i <= 10; i=i+2){		// int i = 0 - this is the initialization step, where the value of the index is set to something 
	//					// i <= 10 - this is the condition, this just means to repeat the code until the condition is met
	//				// i=i+1 - traditionally written as i++, (or i+=x if the value is something other than 1) but here i just kept it as i=i+1 for readability
	//	printf("%d\n", i); 
	//}

	//for(int x = 10; x >= 0; x=x-1){
	//	printf("%d\n", x);
	//}
	
	//for(int x = 10; x >= 0; x=x-2){
	//	printf("%d\n", x);
	//}
	
	example();

	return 0; 
}

int example(){

	// counts down from 10 to 0, once thats done it prints happy new year. 

	for(int i = 10; i >= 0; i=i-1){
		sleep(1); 
		printf("%d\n", i);
	}
	sleep(1);
	printf("HAPPY NEW YEAR!\n");		// the print statement is executed after escaping the for satement 
}
