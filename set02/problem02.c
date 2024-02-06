#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;

}
int input_side(){
    int side;
    printf("enter the sides:");
    scanf("%d",&side);
    return side;
}
int check_scalene(int a, int b, int c){
    if(a!=b && b!=c && c!=a){
        return 1;
    }
        else{
            return 2;
        }
}
       void output(int a, int b, int c, int isscalene){
        if(isscalene==1){
            printf("the triangle with %d,%d and %d is scalene",a,b,c);

        }
        if(isscalene==2){
            printf("the triangle with %d,%d and %d is not scalene",a,b,c);
            
        }
       }
   
    
