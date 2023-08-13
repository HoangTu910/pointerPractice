#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<malloc.h>
void printArray(int array[], int size){
    int i = 0;
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int* pushBack(int* a, int* size, int value){
    int m = (*size) + 1;
    
    int* anew = (int*)realloc(a, m * sizeof(int));
    if(anew != NULL){
        anew[*size] = value;
        (*size)++;
    }
    return anew; //pmem
}

int* input_array(int* size){
    int* a = NULL;
    int* res;
    *size = 0;
    int value;
    
    while(scanf("%d", &value) >  0){
        res = pushBack(a, size, value);
        if(res != NULL){
            a = res;
        }
    }
    return a; //pmem
}

int main(){
    int* arrayPointer;
    int arraySize;
    
    printf("Input array: \n");
    arrayPointer = input_array(&arraySize);
    printArray(arrayPointer, arraySize);
    if(arrayPointer != NULL){
        free(arrayPointer);
    }
    return 0; 
}