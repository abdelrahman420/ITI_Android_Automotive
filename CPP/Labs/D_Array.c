#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int *data;      
    int size;       
    int capacity;  
} Dynamic_Array;


void initArray(Dynamic_Array *arr, int capacity) 
{
    arr->data = (int *)malloc(capacity * sizeof(int));
    arr->size = 0;
    arr->capacity = capacity;
}


void insertElement(Dynamic_Array *arr, int element, int position) 
{
    if (position < 0 || position > arr->size) {
        printf("Invalid position\n");
        return;
    }
    
    if (arr->size == arr->capacity) {
        arr->capacity *= 2;
        arr->data = (int *)realloc(arr->data, arr->capacity * sizeof(int));
    }

    for (int i = arr->size; i > position; i--) {
        arr->data[i] = arr->data[i - 1];
    }
    
    arr->data[position] = element;
    arr->size++;
}


void deleteElement(Dynamic_Array *arr, int position) 
{
    if (position < 0 || position >= arr->size) 
    {
        printf("Invalid position\n");
        return;
    }

    for (int i = position; i < arr->size - 1; i++) 
    {
        arr->data[i] = arr->data[i + 1];
    }
    
    arr->size--;
}


void printArray(Dynamic_Array *arr) {
    for (int i = 0; i < arr->size; i++) 
    {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
}


void freeArray(Dynamic_Array *arr) 
{
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

int main() {
    Dynamic_Array arr;
    
    initArray(&arr, 4);
    insertElement(&arr, 24, 0);
    insertElement(&arr, 3, 1);
    insertElement(&arr, 65, 2);
    insertElement(&arr, 71, 3);
    printf("Array after insertion: ");
    printArray(&arr);
    deleteElement(&arr, 1);
    printf("Array after deletion: ");
    printArray(&arr);
    insertElement(&arr, 50, 2);
    printf("Array after insertion: ");
    printArray(&arr);
    freeArray(&arr);
    
    return 0;
}
