//2. Write a C program to add two numbers.
#include<stdio.h>
int main(){
    int x,y,sum;
    printf("enter the 1st number");
    scanf("%d" ,&x);
    printf("enter second number ");
    scanf("%d",&y);
    sum=x+y;
    printf("the sum of 2 numbers is %d", sum);
    return 0;
}