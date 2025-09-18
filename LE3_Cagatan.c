#include<stdio.h>

int main(){
    char CompleteName[100], Section[100];
    int num1, num2;
    float division;

    printf("Enter Complete Name: ");
    fgets(CompleteName, sizeof(CompleteName), stdin);
    printf("Enter Section: ");
    fgets(Section, sizeof(Section), stdin);

    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n Student Calculator\n");
    printf("Student name: %s", CompleteName);
    printf("Section: %s", Section);
    printf(" Results:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    if (num2 != 0){
        division = (float) num1 / num2;
        printf("%d / %d = %.2f\n", num1, num2, division);
    }
    else {
        printf("%d / %d = undefined (cannot divide by zero)\n", num1, num2);
    }
    return 0;
}