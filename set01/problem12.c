#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main(){
int n=get_n();
Complex complex_numbers[n];
input_n_complex(n,complex_numbers);
Complex sum=add_n_complex(n,complex_numbers);
output(n,complex_numbers,sum);
return 0;
}
int n_get(){
    int n;
    printf("enter the number of complex numbers: ");
    scanf("%d",&n);
    return n;
}
Complex input_complex(){
    Complex c;
    printf("%f %f" ,&c.real, &c.imaginary);
    return c;
}
void input_n_complex(int n,Complex c[n]){

}
