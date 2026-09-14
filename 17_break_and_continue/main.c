#include <stdio.h> 

int main() {

	// break - break out of loop (STOP)
	// continue - skip current cycle of a loop (SKIP)
	
	for(int i = 1; i <= 10; i=i+1){
		if(i == 4){
			//break; 		// if condition is true, stop the loop when i is equal to 4 
			continue; 	// if the condition is true, skip 4 and continue the loop. it will loop from 1 to 10 but it'll skip 4.	 
		}

		printf("%d\n", i);

	}

	return 0;
}
