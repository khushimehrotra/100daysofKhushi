#include<stdio.h>

int main(){
    //Q5. Write a program to convert temperature from Celsius to Fahrenheit.
    float c = 36.2 ;
    float f ;
    f = (c * 9/5) + 32;
    printf("celsius value is %f \n" , c);
    printf("fahrenheit value is %f \n" , f);

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