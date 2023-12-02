// Print the digonal elements of the matrix
//  #include <stdio.h>
//  #define MAX_SIZE 100

// int main()
// {
//     int matrix[MAX_SIZE][MAX_SIZE];
//     int i, j, rows, columns;

//     /* Input number of rows and columns from user */
//     printf("Enter number of rows and columns of matrix: ");
//     scanf("%d %d", &rows, &columns);

//     /* Input elements in matrix */
//     printf("Enter elements in matrix: \n");
//     for(i=0; i<rows; i++)
//     {
//         for(j=0; j<columns; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     /* Print diagonal elements of matrix */
//     printf("Diagonal elements of matrix are: ");
//     for(i=0; i<rows; i++)
//     {
//         for(j=0; j<columns; j++)
//         {
//             /* Print elements when i==j */
//             if(i==j)
//             {
//                 printf("%d ", matrix[i][j]);
//             }
//         }
//     }

//     return 0;
// }

// Here print both primary and secondary digonal elements
// #include <stdio.h>

// int main() {
//     int rows, cols, i, j;
//     printf("Enter the number of rows and columns of the matrix: ");
//     scanf("%d %d", &rows, &cols);
//     int matrix[rows][cols];
//     printf("Enter the elements of the matrix: \n");
//     for(i = 0; i < rows; i++) {
//         for(j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("Primary diagonal elements of the matrix: ");
//     for(i = 0; i < rows; i++) {
//         for(j = 0; j < cols; j++) {
//             if(i == j) {
//                 printf("%d ", matrix[i][j]);
//             }
//         }
//     }
//     printf("\nSecondary diagonal elements of the matrix: ");
//     for(i = 0; i < rows; i++) {
//         for(j = 0; j < cols; j++) {
//             if((i + j) == (rows - 1)) {
//                 printf("%d ", matrix[i][j]);
//             }
//         }
//     }
//     return 0;
// }
