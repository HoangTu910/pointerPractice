#include <stdio.h>
#define MAX 100
int main(){
    char str[MAX];
    char revstr[MAX];
    char *strp = str;
    char *revstrp = revstr;
    int size = -1;

    printf("String: ");
    scanf("%s", str);

    while(*strp){
        strp++;
        size++;
    }

    while(size >= 0){
        strp--;
        *revstrp = *strp;
        revstrp++;
        size--;
    }
    *revstrp = '\0';
    printf("%s ", revstr);

    // char str[MAX] = "reversethis";
    // char revstr[MAX];
    // char *strp = str;
    // strp+=3;
    // printf("%s ", strp);

}