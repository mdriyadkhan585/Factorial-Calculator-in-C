#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: 0! = 1 and 1! = 1
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}

int main() {
    int num;
    printf("=======================================\n");
    printf("         FACTORIAL CALCULATOR          \n");
    printf("=======================================\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n---------------------------------------\n");

    if (num < 0) {
        printf(" Error: Factorial of a negative number doesn't exist.\n");
    } else {
        printf(" Factorial of %d is: %lld\n", num, factorial(num));
    }

    printf("---------------------------------------\n");
    printf("          Thank you for using          \n");
    printf("     the Factorial Calculator!         \n");
    printf("=======================================\n");

    return 0;
}
