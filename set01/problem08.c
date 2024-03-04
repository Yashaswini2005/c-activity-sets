//what is array?
/*In the main function, the array a is declared as int a[n];.
 How is this different from declaring an array with a fixed size, e.g., int a[100];?*/
 //why didnt we use a[n] in output statement?



#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
     return 0;
}
int input_array_size()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    return n;
}
void input_array(int n,int a[n])
{
    printf("enter %d numbers :",n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        
    }
}
int sum_n_array(int n,int a[n])
{
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=a[i];

    }
    return sum;
}
void output(int n,int a[n],int sum)
{
    printf("sum of %d numbers is %d",n,sum);
}