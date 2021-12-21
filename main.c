#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("=== Task 1 ===\n");
    float MAS[4];
   // A[] = {-8.8, 11.2, 64.67, 55.32};
    MAS[0] = -8.8;
    MAS[1] = 11.2;
    MAS[2] = 64.67;
    MAS[3] = 55.32;
    for (int i = 0; i < 4; i++) {
        printf("%f\n", *(MAS + i));
    }
    printf("=== Task 2 ===\n");

    float *arr = (float *) malloc(4 * sizeof(float));

    arr[0] = -8.8;
    arr[1] = 11.2;
    arr[2] = 64.67;
    arr[3] = 55.32;
    for (int i = 0; i < 4; i++){
        printf("%f\n", arr[i]);
    }
    free(arr);
}