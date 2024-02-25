/* Write a program to find the area of a triangle.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);
```*/

#include<stdio.h>
typedef struct _triangle{
    float base,altitude,area;

}Triangle;
Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main(){
    Triangle t;
   t=input_triangle();
   find_area(&t);
   output(t);
   return 0; 
}
Triangle input_triangle(){
    Triangle t;
    printf("Enter the base of thr triangle:");
    scanf("%f",&t.base);
    printf("Enter the triangle altitude:");
    scanf("%f",&t.altitude);
    return t;
    }
    void find_area(Triangle *t){
        t->area=0.5*(t->base)*(t->altitude);

    }
void output(Triangle t){
    printf("The triangle with base %f and altitude %f has an area of %f",t.base,t.altitude,t.area);
}