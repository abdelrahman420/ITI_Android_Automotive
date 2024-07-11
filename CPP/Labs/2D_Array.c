#include <stdio.h>
#include <stdlib.h>

typedef int* (*CallbackFunc)(int** arr_2d,int arr_size,int* row_sizes, int (*func)(int*, int) );

int sum(int* arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}


int* array_2d(int** arr_2d, int arr_size, int* row_sizes, int (*func)(int*, int)) {
    int* results = (int*)malloc(arr_size * sizeof(int));
    for (int i = 0; i < arr_size; ++i) {
        results[i] = func(arr_2d[i], row_sizes[i]);
    }
    return results;
}

int main() {
    int row_sizes[] = {2, 3, 5};
    int* arr_2d[3];
    arr_2d[0] = (int[]){5, 3};
    arr_2d[1] = (int[]){2,4,6};
    arr_2d[2] = (int[]){2, 3, 5, 7,11};

    CallbackFunc func_ptr = array_2d;
    int* results = func_ptr(arr_2d, 3, row_sizes, sum);

    for (int i = 0; i < 3; ++i) {
        printf("sum of row %d: %d\n", i, results[i]);
    }

    free(results);
    return 0;
}
