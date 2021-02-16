// C program to multiply two floating-point numbers.

#include<stdio.h>

int main(){
    float num1, num2;
    double n;
    
    printf("enter two numbers\n");
    scanf("%f%f", &num1, &num2);

    n = num1 * num2;

    printf("%f", n);
    return 0;
}