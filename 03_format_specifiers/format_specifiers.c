#include <stdio.h> 

// Format specifiers - special tokens that being with a % symbol,
// 			followed by a character that specifies the data type and optional modifiers
// 			(width, precision, flags). They control how data is displayed or interpreted. 

int main(void) {
	int age = 25; 
	float price = 2.99;
	double pi = 3.1415926535;
	char currency = '$'; 
	char name[] = "Paul Logos";

	printf("age: %d\n", age);	// the format specifier %d is for digit
	printf("price: $%.2f\n", price);	// the format specifier %f is for float. the .2 modifer is to specify how many decimals the statement will output
	printf("pi: %lf\n", pi);	// the format specifier %lf is for LONG float, or DOUBLE (remember this) this ensures the variable dedicates 8 bytes in the stack.	
	printf("currency: %c\n", currency);	// the format specifier %c is for character
	printf("name: %s\n", name);	// despite the name variable also being a character, since it is an ARRAY of characters - the format specifier %s is used for string.
	

	// === WIDTH ===
	//we've aleady played around with precision in format specifiers, this part goes over how width can be manipulated in a print or scanf statement
	
	int num1 = 1;
	int num2 = 10; 
	int num3 = 100; 

	printf("num1: %3d\n", num1); // Unlike the precision examples above, width ensures that the printf statement outputs at least 3 characters.
				     // For example, printing num1 with a width of three will output "  1", notice the space before the one - thats the width. 
				     // a value like 100 won't have any extra space since its taken up by the value itself. This is known as a right justification. 


	printf("num2: %-3d\n", num2); // you can perform whats known as a left justification with width manipulation. lets say you set the width to a negative number like 
				     // -3, instead of the statement returning " 10", it'll return "10 ". Again notice that space after the value, thats left justification.
	

	printf("num3: %04d\n", num3); // you can also precede the value with a 0. Lets say we set the width to 04, instead of 4. instead of there being a space before the value,
			  		// 100 in this case, the value will output a zero before the value, 0100 in this case. 
	

	// === FLAGS === 
	int num4 = -100; 
	int num5 = 200; 

	printf("num4: %+d\n", num4); // adding a plus sign before the format specifier will return a plus sign before a value, and if the value is negative - it will display 
				    // a negative sign. 
	printf("num5: %+d\n", num5); 

	
	// === PRECISION === 
	 
	float price1 = 19.99; 
	float price2 = -1.30; 
	float price3 = -100.00; 

	// when displaying a floating point value, C defaults to displaying 6 decimal places. 
	
	printf("price1: %.2f\n", price1); // the default 6 decimal places can be specified in the format specifier by .x (x being any value). 
					// For example, imagine a value of 2.44, C will default to displaying it as 2.440000. 
					// However, using the format specifier %.2f will cause the value to return 2 decimals making it return 2.44.


	printf("price2: %+7.1f\n", price2); // you can also combine width, precision and flag manipulation. this will return "       1.3"
	
	printf("price3: %.0f\n", price3); // adding .0 before the float format specifier will make the value round up. for example, 1.50 will round up to 2.


	return 0; 
}
