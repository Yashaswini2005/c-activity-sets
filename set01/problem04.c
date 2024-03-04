//what is call by reference
//why we don't use & symbol in call by reference 
//what is pointer variable
#include<stdio.h>
void input(int *n);
void sum(int n, int *sum);
void output(int n, int sum);
int main()
{
    int n, add;
    input(&n);
    sum(n,&add);
    output(n,add);
    }
    void input(int *n)
    {
        printf("enter the number:");
        scanf("%d",n);
    }
    void sum(int n,int *sum)
    {
        *sum=0;
        for(int i=0;i<n;i++)
        {
            *sum=*sum+i;
        }
    }
    void output(int n, int sum)
    {
printf("the sum of natural n natural numbers are :%d",sum);
    }