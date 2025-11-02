#include<stdio.h>

int main(){
    //Q6. Write a program to swap two numbers using a third variable
    int a , b , k ;
    printf("enter a ");
    scanf("%d " , &a );
    printf("enter b ");
    scanf("%d " , &b);
    k = a ;
    a = b ;
    b = k ;
    printf ("swapped a is %d \n" , a);
    printf("swapped b is %d \n" , b);
    
    return 0;
        
}