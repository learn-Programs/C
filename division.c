// c program to find quotient and remainder of two integers.

#include<stdio.h>

int main() {
    int a, b;
    int q, re;

    printf("Enter dividend: ");
    scanf("%d", &a);
    printf("enter divisor: ");
    scanf("%d", &b);

    // computes quotient
    q  = a / b;

    // computes remainder.
    re = a % b;

    printf("Quotient = %d\n",q);
    printf("Remainder = %d\n", re);
    return 0;

}

