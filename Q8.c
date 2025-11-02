#include<stdio.h>
int main() {
    //Q8. Write a program to find and display the sum of first n natural numbers.
    int n;
    printf("enter the number n :");
    scanf("%d " , &n);
    int sum = n*(n + 1)/2;
    printf("sum is %d" , sum);
    return 0;
}