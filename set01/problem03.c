//what is call by value

int a = 10;
float f = 5.5;
char a = 'c';
char a[100]="hello";
//what is called function

//A function take paremeters returns a value.

int add(int a, int b)
{
    return a+b;
}



//what is calling function
#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main() {
    int num1, num2, result;
    num1 = input();
    num2 = input();
    result = add(num1, num2);
    output(num1, num2, result);

    return 0;
}

int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}


int add(int a, int b) {
    return a + b;
}


void output(int a, int b, int sum) {
    printf("Sum of %d and %d is: %d\n", a, b, sum);
}

