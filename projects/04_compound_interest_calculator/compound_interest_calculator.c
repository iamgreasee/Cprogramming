#include <stdio.h> 
#include <math.h> 

// compound interest calculator

int main() {
	
	double principal = 0.0; 
	double rate = 0.0; 
	int years = 0;
	int timesCompounded = 0; 
	double total = 0.0; 

	printf("===Compount Interest Calculator===\n");

	printf("enter the principal (P): ");
	scanf("%lf", &principal);

	printf("enter the interest rate as a percent (R): ");
	scanf("%lf", &rate); 
	rate = rate / 100; 
	
	printf("enter the number of years (T): ");
	scanf("%d", &years);

	printf("enter number of times compounded per year (N): ");
	scanf("%d", &timesCompounded);

	total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);  
	printf("After %d years, the total will be $%.2lf\n", years, total);

	return 0; 
}
