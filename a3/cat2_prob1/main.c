#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 3

int** create_matrix(int rows, int columns);
void input_matrix(int** matrix, int rows, int columns);
void print_matrix(int** matrix, int rows, int columns);
int** multiply_matrices(int** matrix1, int** matrix2, int rows, int columns);

int main(void) {
    int** matrix1 = create_matrix(ROWS, COLUMNS);
    int** matrix2 = create_matrix(ROWS, COLUMNS);

    printf("Enter matrix 1:\n");
    input_matrix(matrix1, ROWS, COLUMNS);

    printf("Enter matrix 2:\n");
    input_matrix(matrix2, ROWS, COLUMNS);

    int** result = multiply_matrices(matrix1, matrix2, ROWS, COLUMNS);

    printf("Resulting matrix:\n");
    print_matrix(result, ROWS, COLUMNS);

    // Free dynamically allocated memory
    for (int i = 0; i < ROWS; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}

int** create_matrix(int rows, int columns) {
    int** matrix = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(columns * sizeof(int));
    }
    return matrix;
}

void input_matrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int** multiply_matrices(int** matrix1, int** matrix2, int rows, int columns) {
    int** result = create_matrix(rows, columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}
