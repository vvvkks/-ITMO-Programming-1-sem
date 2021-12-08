#include <stdio.h>

int main() {
    printf("Task 1: \n");
    int array[9] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
    for (int i = 0; i < 9; i++) {
        printf("%d\n", array[i]);
    }
    printf("\nTask 2: \n");
int mat1[2][2] = {1, 1, 1, 4},
    mat2[2][2] = {1, 2, 4, 1},
    result[2][2] ;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            result[i][j] = mat1[i][0] * mat2[0][j] + mat1[i][1] * mat2[1][j];
        }
    }
    printf("\n %d %d \n", result[0][0], result[0][1]);
    printf("%d %d", result[1][0], result[1][1]);
    return 0;
}
