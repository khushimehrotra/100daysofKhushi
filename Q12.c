#include<stdio.h>
//Q12.Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
int main() {
    int n;
    printf("Enter an integer:");
    scanf("%d" , &n);
    if(n<=0){
        if(n ==0){
            printf("%d is Zero",n);
        }else {
            printf("%d is Negative",n);
        }
    }
    else{
        printf("%d is Positive",n);
    }
}