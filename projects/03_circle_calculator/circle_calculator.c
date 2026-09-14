#include <stdio.h> 
#include <math.h> 

int main() {

	const double PI = 3.14159;	// the const keyword ensures that the value of pi cannot be altered throughout the script. 
					// note that it is common practice to make constant variavles ALL CAPS. 
	double radius = 0.0; 
	double area = 0.0; 
	double surfaceArea = 0.0;
	double volume = 0.0; 

	printf("enter the radius (cm): ");
	scanf("%lf", &radius); 

	area = PI * (radius = pow(radius, 2));
	surfaceArea = 4 * PI * pow(radius, 2);
	volume = (4.0 / 3.0) * PI * pow(radius, 3);

	printf("area (2D): %.2lf\n", area);
	printf("surface area (3D): %.2lf\n", surfaceArea);
	printf("volume: %lf\n", volume);


	return 0; 
}
