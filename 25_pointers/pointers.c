#include <stdio.h>

// pointer = A variable that stores the meory address of another variable. 
// 	     Benefit: They help avoid wasting memory by allowing you to pass 
// 	     the address ofa large data structure instead of copying the entire data. 

// & - at the address of 
// * - dereference operator - will return the value at a given memory address. 

void Birthday(int* age); // passing a pointer into a function requires the * to be taken as a paremeter within the function prototype too 

int main() {

	// lets say you're at a pizza party, instead of giving everyone a copy of the pizza (wasting resources), you give them the address 
	// to your house (a pointer) so they can all go get pizza from the same place. easier than carrying a bunch of pizzas to the different addresses. 
	
	int age = 24; 	// this variable has a MEMORY ADDRESS 
	
	//printf("memory address of age:%p\n", &age);	// this will return the address of the variable age. using "&" address of function  

	// a pointer works by storing the memory address of 'age' as a value in another variable.
	
	int *pAge = &age;		// * = derefernce operator
	
	printf("memory address of age:%p\n", &age);		// this will return the same memory address as the pAge pointer 
	printf("memory addres of age pointer:%p\n", pAge); 	// will return the same memory address as the age variable
	

	Birthday(pAge); // if we have a function, we don't neccessarily need to declare a pointer before passing it into a function.
			// we could just pass in the address of the variable. (&age) instead of (pAge).

	printf("you are %d years old\n", age);
	return 0; 
}

void Birthday(int* age){	// passing in a pointer into a function requires the * too
	// pass by value. when we pass a value to a function - we actually make a copy of that value. 
	// incrementing the value doesn't change the value of the variable but the copy made of it. 
	
	//age = age + 1; // this will just increment the memory address of the variable age, not the value itself

	// pass by reference. rather than passing the original value, passing in variable that points to the original value
	
	(*age) = (*age) + 1; // parenthesis are necessary - operator presidence in C, not closing pointers in parenthesis will just modify the memory    									       address. because we will increment first, and then dereference. 
			     							//    parenthesis will do the opposite, dereferencing first, then 
										//    incrementing

}


// think of the * as a star shaped key,
// it will unlock a memory address and return the value to you. 

