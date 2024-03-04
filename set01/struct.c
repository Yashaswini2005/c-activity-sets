#include<stdio.h>
int main()
{
    struct point 
{
    float x;
    float y;
};
typedef struct point Point;
Point p={1.0,2.5};
printf("%f %f\n",p.x,p.y);
}

