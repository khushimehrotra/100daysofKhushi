#include<stdio.h>
//Q1 Write a program to input two numbers and display their sum.

int main() {
    int a , b ;
    printf("enter a :");
    scanf("%d" , &a);
    printf("enter b :");
    scanf("%d" , &b);
    printf("sum is %d \n" , a + b);
    


//Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.
    float c , d ;
    printf("enter c :");
    scanf("%f" , &c);
    printf("enter d :");
    scanf("%f" , &d);
    printf("sum is %f \n", c + d);
    printf("diff is %f \n" , c - d);
    printf("prod is %f \n" , c*d);
    printf("quo is %f \n" , c/d);
    return 0;
}

