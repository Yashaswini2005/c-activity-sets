#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);
int main(){
    float x1,y1,x2,y2,x3,y3;
    int result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("Enter the coordinates of the first point (x1,y1)\n:");
    scanf("%f,%f",x1,y1);
    printf("Enter the coordinates of the Second  point (x2,y2)\n:");
    scanf("%f,%f",x2,y2);
    printf("Enter the coordinates of the Third point (x3,y3)\n:");
    scanf("%f,%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3){
    if((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))!=0) {
        return 1;
    }
    else{
        return 0;
    }
}
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result){
    if(result){
        printf("the points (%f,%f),(%f,%f) and (%f,%f) Form a Triangle.:",x1,y1,x2,y2,x3,y3);

    }
    else{
        printf("the points (%f,%f),(%f,%f) and (%f,%f)does not form a Triangle.:",x1,y1,x2,y2,x3,y3);
    }
}
