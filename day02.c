#include<stdio.h>
int main() {
    //Q3.Write a program to calculate the area and perimeter of a rectangle given its length and breadth
    int l , b ;
    l = 2 , b = 3;
    printf("length is %d \n" , l);
    printf("breadth is %d \n" , b);
    printf("area is %d \n ", l*b);
    printf("perimeter is %d \n" , 2*(l + b));


    //Q4.Write a program to calculate the area and circumference of a circle given its radius.

    float r = 4 ;
    printf("radius is %f\n" , r);
    printf("area is %lf \n ", 3.14 * r *r);
    printf("circumference is %f\n" , 2* 3.14 * r );
    return 0;


}
