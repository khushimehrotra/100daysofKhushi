#include<stdio.h>
int main() {
    //Q3.Write a program to calculate the area and perimeter of a rectangle given its length and breadth
    int l , b ;
    l = 2 , b = 3;
    printf("length is %d \n" , l);
    printf("breadth is %d \n" , b);
    printf("area is %d \n ", l*b);
    printf("perimeter is %d \n" , 2*(l + b));
    return 0;

}

