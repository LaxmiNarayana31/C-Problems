// DELETION OPERATION
// Delete an element at beginning of the array

#include <stdio.h>

#define MAX_SIZE 100     // maximum size of the array

int main() {
    int arr[MAX_SIZE], size, i;

    // get the size of the array from the user
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    // get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // delete the first element of the array
    for (i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // decrease the size of the array by 1

    // print the updated array
    printf("The array after deletion is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}






// Delete an element at end of the array
//  #include <stdio.h>

// #define MAX_SIZE 100 // maximum size of the array

// int main() {
//     int arr[MAX_SIZE], size, i;

//     // get the size of the array from the user
//     printf("Enter the size of the array (max %d): ", MAX_SIZE);
//     scanf("%d", &size);

//     // get the elements of the array from the user
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // delete the last element of the array
//     size--; // decrease the size of the array by 1

//     // print the updated array
//     printf("The array after deletion is:\n");
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }





// Delete an element at any specific position of the array
//  #include <stdio.h>

// int main() {
//     int arr[100];
//     int n, pos, i;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     // Populate the array
//     printf("Enter the elements of the array: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Display the original array
//     printf("Original Array: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     // Ask the user for the position to delete
//     printf("\nEnter the position to delete (0-indexed): ");
//     scanf("%d", &pos);

//     // Check if the position is valid
//     if (pos < 0 || pos >= n) {
//         printf("Invalid position\n");
//         return 0;
//     }

//     // Shift the elements to the left to delete the element at the specified position
//     for (i = pos; i < n - 1; i++) {
//         arr[i] = arr[i+1];
//     }

//     // Decrement the number of elements in the array
//     n--;

//     // Display the modified array
//     printf("Modified Array: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }