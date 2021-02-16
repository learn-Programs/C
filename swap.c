//C program to swap two numbers.

#include<stdio.h>

int main() {

    int a, b;
    int temp = 0;
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}