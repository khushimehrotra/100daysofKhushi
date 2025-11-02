#include<stdio.h>
//Q10.Write a program to input time in seconds and convert it to hours:minutes:seconds format.
int main(){
    int t;
    printf("Enter time in seconds:");
    scanf("%d", &t);
    int h = t/3600;
    int m = (t % 3600) / 60;
    int s = t % 60;
    printf("Time is : %d : %d : %d", h,m ,s);
    return 0;
}