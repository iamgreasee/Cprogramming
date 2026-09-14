#include <stdio.h>

// if statements = do some code if a condition is true

int main() {

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 50) {
        printf("You are 50 or older.\n");
    }
    else if (age >= 18) {
        printf("You are an adult.\n");
    }
    else if (age >= 0) {
        printf("You are under 18.\n");
    }
    else {
        printf("Invalid age.\n");
    }

    return 0;
}
