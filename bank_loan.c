#include <stdio.h>

int main() {
    int age;
    float income;
//take user input for age
    printf("Enter your age: ");
    scanf("%d", &age);
//take user input for annual income
    printf("Enter your annual income (Sh): ");
    scanf("%f", &income);
//check for elegibility to qualify the loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    }
    else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
