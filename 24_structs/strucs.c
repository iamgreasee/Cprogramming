#include <stdio.h> 
#include <stdbool.h>
#include <string.h> 
// struct = a custom container that holds multiple 
// 	    pieces of related information. 
// 	    Similar to objects in other languages. 


struct Student{
	// think of a struct as a blue print, assigning the struct with members (attributes) all students (in this case) will have.
	char name[50]; 
	int age; 
	float gpa; 
	bool isFullTime; 

};

void printStudent(struct Student student);

int main() {

	struct Student student1 = {"spongebob", 30, 4.0f, true};
	
	//struct Student student2; // when we declare a struct, we're using up memory. not reassigning the values within the struct to a given variable will produce garbage values.
	
	struct Student student2 = {0};

	strcpy(student2.name, "patrick");	// string copy function takes the name member given to student 2 and assigns it to patrick AFTER its already been initialized. 

	printStudent(student1);
		

	return 0;
}

void printStudent(struct Student student){
	printf("%s\n", student.name);	// . = member access operator
	printf("%d\n", student.age); 
	printf("%.2f\n", student.gpa);
	printf("%s\n", (student.isFullTime) ? "full time" : "part time");

}
