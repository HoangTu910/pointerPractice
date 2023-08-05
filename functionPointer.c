#include<stdio.h>
#include<math.h>

void swapNum(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int giamDan(int a, int b){
    return a < b;
}

int tangDan(int a, int b){
    return a > b;
}

void selectionSort(int array[], int n, int(*select)(int , int)){
    for(int i=0; i<n-1; i++){
        int findIndex = i;
        for(int j=i+1; j<n; j++){
            if(select(array[findIndex], array[j])){
                findIndex  = j;
            }
        }
        swapNum(&array[findIndex], &array[i]);    
    }
}

void printArray(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}
int main(){
    int a[] = {4,5,12,4,7,1,3,6};
    int n = sizeof(a) / sizeof(a[0]);
    selectionSort(a, n, giamDan);
    printArray(a, n);
}