#include<stdio.h>

void increment(int *n){
    *n = *n + 1;
}

void sum(int a[], int size){ //int *a or int a[] it is the same
    int i = 0;
    int sum = 0; 
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    a[1] = a[1] + 1;
    size = size - 1;
    printf("a[1] address = %d\n", &a[1]);
    printf("size address = %d\n", &size);
    printf("size in func = %d\n", size);
    printf("a[1] in func = %d\n", a[1]);
}

int main(){
    int a = 10;
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(sizeof(arr[0]));
    printf("a[1] address in main = %d\n", &arr[1]);
    printf("size address in main = %d\n", &size);
    printf("size = %d\n", size);
    printf("a[1] = %d\n", arr[1]);
    sum(arr, size);
    //increment(&a); //int *n  = &a
    //printf("sum = %d\n", sum(arr, size));
}
