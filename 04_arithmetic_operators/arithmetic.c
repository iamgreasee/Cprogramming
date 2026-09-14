#include <stdio.h> 

int main() {
	

	// === ADDITION ===
	// int x = 2; 
	// int y = 4;
	// int z = 0; // stores the result

	// z = x + y; 
	// printf("2 + 4 = %d\n", z);

	// === SUBTRACTION === 
	// int x = 2; 
	// int y = 4;
	// int z = 0; // stores the result

	// --- example A --- 
	//z = x - y; 
	//printf("2 - 4 = %d\n", z);

	// --- example B --- 
	// z = y - x; 
	// printf("4 - 2 = %d\n", z);
	
	// === MULTIPLICATION === 
	// int x = 2; 
	// int y = 4;
	// int z = 0; // stores the result

	// z = x * y; 
	// printf("2 x 4 = %d\n", z); 

	// === DIVISION ===
	// double x = 2; 
	// double y = 4;
	// double z = 0; // stores the result
	

	// z = x / y; 
	// printf("2 / 4 = %d\n", z); // make sure that the two variables are stored as a float or a double if the outcome is a decimal, 
				   // changing the format specifier to a float despite the two variables being stores as integers just returns a whole number. i am an idiot. 
				   // I guess it makes to set a variable to a float or a double if it takes a user input then calculates the outcome of it, but for the sake of 
				   // this example im going to keep the variables stored as an integer. 
	
	// z = y / x; 
	// printf("4 / 2 = %d\n", z); 

	// === MODULUS ===
	// int x = 10;
	// int y = 3; 
	// int z = 0; 
	
	//--- example A ---
	// z = x % y; 
	// printf("10 MOD 3 = %d\n", z);
	
	//--- example B ---
	// z = y % x; 
	// printf("3 MOD 10 = %d\n", z); // the outcome will be 3 because 10 goes into 3 zero times, leaving 3 as the remainder. Just basic modulo not necessarily related to C 
	
	// === INCREMENT === 
	int x = 10; 
	int y = 2; 
	int z = 0;

	// x++; // this will increment the value of x by 1.
	        // adding the ++ after the variable won't modify the value of the variable itself but it will increment whats displayed by 1
	
	// printf ("x incremented by 1 is: %d\n", x);
	
	//++x; // adding the ++ before the variable will also increment it by one but it will modify the actual value of x and not just display the value incremented by 1.
	//z = ++x; // here the value of z is set to the value of x, proving that the use of ++ before a variable physically modifies the value of the variable 
	// printf("%d\n", z);
	
	// === DECREMENT === 
	// x--; // this will decrement the value of x by 1.
	     // adding the -- after the variable won't modify the value of the variable itself but it will decrement whats displayed by 1
	
	// printf("the value of x decremented by 1 is: %d\n", x);
	
	// --x; // adding the -- before the variable will also decrement it by one but it will modify the actual value of x and not just display the value decremented by 1.
	z = --x; // here the value of z is set to the value of x, proving that the use of -- before a variable physically alters the value of the variable 
	// printf("x decremented by 1 is %d\n", z);

	return 0; 
}
