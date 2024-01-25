#include<stdio.h>
struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main(){
    Complex complex1,complex2;
    complex1=input_complex();
    complex2=input_complex();
    Complex sum=add_complex(complex1,complex2);
    output(complex1,complex2,sum);
    return 0;
}
Complex input_complex(){
    Complex c;
    printf("enter the real part;");
    scanf("%f",&c.real);
    printf("enter the c.imaginary:");
    scanf("%f",&c.imaginary);
    return c;

}
Complex add_complex(Complex a,Complex b){
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a,Complex b,Complex sum){
    printf("Sum of (%.2f +%.2fi) and (%.2f +%.2fi) is :%.2f +%.2fi\n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary); 
}