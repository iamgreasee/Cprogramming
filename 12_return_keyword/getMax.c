#include <stdio.h> 

int getMax(int x, int y){
	if(x > y){
		return x; 
	}
	else{
		return y; 
	}

}


int main() {

	int x = 0; 
	int y = 0; 

	printf("enter your first number: \n"); 
	scanf("%d", &x);

	printf("enter your second number: \n"); 
	scanf("%d", &y); 

	int max = getMax(x, y);							// this just sets the value of the getMax function to a variable called max 
	printf("%d is the largest\n", max);					// then prints it. 

	//if(getMax(x, y) == x){						// this also works but its kinda bloat, 
	//	printf("%d, or your first number, is the largest\n", x);
	//}
	//else{
	//	printf("%d, or your second number, is the largest\n", y);
	//}

	return 0; 
}
