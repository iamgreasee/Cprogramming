#include <stdio.h>

void modify(int *num) {
    *num = 100;
}

int main() {
    int x = 5;
    modify(&x);
    printf("%d\n", x);

    return 0; 
}
