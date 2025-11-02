#include<stdio.h>
//Q11.Write a program to input an integer and check whether it is even or odd using if–else
int main(){
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("%d is Even",n);
    } else {
        printf("%d is Odd", n);
    }
    return 0;
}