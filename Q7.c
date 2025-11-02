#include<stdio.h>
int main() {
    //Q7. Write a program to swap two numbers without using a third variable.
    int a , b ;
    printf("enter the two values :");
    scanf("%d %d \n", &a , &b);
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf(" swapped value is : %d %d \n", a , b  );
    return 0;
}