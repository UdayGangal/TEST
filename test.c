#include <stdio.h>

int main() {
    int a, b, c, d, choice;

    
    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    
    printf("Enter 1 for addition, 2 for multiplication: ");
    scanf("%d", &choice);

   
    switch(choice) {
        case 1:
            c = a + b;
            printf("Sum = %d\n", c);
            break;  

        case 2:
            d = a * b;
            printf("Product = %d\n", d);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
