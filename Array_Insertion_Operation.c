/*Array operation:
1)Insert
2)Delete
3)Search
$)Sort*/

// INSERTION OPERATION
// C program to insert an element at beginning of the Array
 #include <stdio.h>

#define MAX_SIZE 100 // maximum size of the array

int main() {
    int arr[MAX_SIZE], size, i, num;

    // get the size of the array from the user
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    // get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // prompt the user to input the number to be inserted at the beginning
    printf("Enter the number to be inserted at the beginning: ");
    scanf("%d", &num);

    // shift the elements of the array to the right to make space for the new element
    for (i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // insert the new element at the beginning of the array
    arr[0] = num;
    size++; // increase the size of the array by 1

    // print the updated array
    printf("The array after insertion is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}




// C program to insert an element at end of the Array
// #include <stdio.h>

// #define MAX_SIZE 100 // maximum size of the array

// int main() {
//     int arr[MAX_SIZE], size, i, num;

//     // get the size of the array from the user
//     printf("Enter the size of the array (max %d): ", MAX_SIZE);
//     scanf("%d", &size);

//     // get the elements of the array from the user
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // prompt the user to input the number to be inserted at the end
//     printf("Enter the number to be inserted at the end: ");
//     scanf("%d", &num);

//     // insert the new element at the end of the array
//     arr[size] = num;
//     size++; // increase the size of the array by 1

//     // print the updated array
//     printf("The array after insertion is:\n");
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }




// C program to insert an element at any specific position of the Array
//  #include <stdio.h>

// #define MAX_SIZE 100 // maximum size of the array

// int main() {
//     int arr[MAX_SIZE], size, i, num, pos;

//     // get the size of the array from the user
//     printf("Enter the size of the array (max %d): ", MAX_SIZE);
//     scanf("%d", &size);

//     // get the elements of the array from the user
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // prompt the user to input the number and position of the element to be inserted
//     printf("Enter the number to be inserted: ");
//     scanf("%d", &num);
//     printf("Enter the position where the number should be inserted (0-indexed): ");
//     scanf("%d", &pos);

//     // shift the elements of the array to the right to make space for the new element
//     for (i = size - 1; i >= pos; i--) {
//         arr[i + 1] = arr[i];
//     }

//     // insert the new element at the specified position
//     arr[pos] = num;
//     size++; // increase the size of the array by 1

//     // print the updated array
//     printf("The array after insertion is:\n");
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
