/* Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```*/

#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str,char*rev_str);
void output(char *a,char *reverse_a);
int main(){
    char input[100];
    char reverse[100];
    input_string(input);
    str_reverse(input,reverse);
    output(input,reverse);
    return 0;
}
void input_string(char*a){
printf("Enter the string:");
scanf("%s",a);
}
void str_reverse(char *str,char*rev_str){
    int length =strlen(str);
    int i,j;
for(i=length -1,j=0;i>=0;i--,j++){
    rev_str[j]=str[i];
}
rev_str[j]='\0';
}
void output(char *a,char *reverse_a){
    printf("The original string:%s",a);
    printf("The reversed string: %s",reverse_a);
}
