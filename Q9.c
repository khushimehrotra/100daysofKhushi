#include<stdio.h>
#include<math.h>
int main() {
    //Q9. Write a program to calculate simple and compound interest for given principal,rate and time.
    float p , r , t , s , c ;
    printf("enter principal value :");
    scanf("%f \n" , &p);
    printf("enter rate of interest value");
    scanf("%f \n", &r);
    printf("enter time period");
    scanf("%f \n", &t);
    s = (p*r*t)/100;
    printf("simple interest is : %f \n" , s);
    c =p*((pow((1 + r/100),t)));
    printf("compound interest is : %f \n" , c);
    return 0;


}