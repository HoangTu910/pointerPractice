#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX];
    int size = 0;
    printf("Size: ");
    scanf("%d", &size);

    int i = 0;

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int *p;
    p = arr;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(*(p+i) > *(p+j)){
                int temp =  *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d ", *(p+i));
    }
    
}