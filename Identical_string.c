// //Check the string are identical or not without using library function
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0) {
        printf("The two strings are identical.\n");
    } else {
        printf("The two strings are not identical.\n");
    }

    return 0;
}



// Check the string are identical or not with help of built-in library function
//  #include <stdio.h>
//  #include <string.h>

// int main() {
//     char str1[100], str2[100];

//     printf("Enter first string: ");
//     scanf("%s", str1);

//     printf("Enter second string: ");
//     scanf("%s", str2);

//     // compare the two strings using strcmp()
//     if(strcmp(str1, str2) == 0) {
//         printf("Strings are identical\n");
//     } else {
//         printf("Strings are not identical\n");
//     }

//     return 0;
// }