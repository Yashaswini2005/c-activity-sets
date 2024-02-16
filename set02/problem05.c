#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main(){
    int a = input();
    int b = input();
    int gcd = find_gcd(a,b);
    output(a,b, gcd);
     return 0;
}
int input(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is %d\n", a, b, gcd);
}