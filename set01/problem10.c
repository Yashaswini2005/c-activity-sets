#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main(){
    char string1[100];
    char string2[100];
    int result;
    input_two_strings(string1,string2);
    result= stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}
void input_two_strings(char *string1, char *string2){
    printf("enter the 1st string:");
    scanf("%s",string1);
     printf("enter the 2nd string:");
    scanf("%s",string2);

}
int stringcompare(char *string1, char *string2) {
    int i = 0;
    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] < string2[i]) {
            return -1;
        } else if (string1[i] > string2[i]) {
            return 1;
        }
        i++;
    }

}
void output(char *string1, char *string2, int result) {
    if (result < 0) {
        printf("%s is greater than %s\n", string2, string1);
    } else if (result > 0) {
        printf("%s is greater than %s\n", string1, string2);
    } else {
        printf("Both strings are equal: %s and %s\n", string1, string2);
    }
}
