#include<stdio.h>
#define MAX 100

int main(){
    char str1[MAX] = "hello";
    char str2[MAX] = "world";

    char *s;
    s = &str1[0];

    char *strp1;
    strp1 = str1;

    char *strp2;
    strp2 = str2;

    while(*strp1 != '\0'){
        strp1++;
    }

    while(*strp2 != '\0'){
        *strp1 = *strp2;
        strp1++;
        strp2++;
    }
    
    *strp1 = '\0';
    printf("%s\n", str1);
    
}