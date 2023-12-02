// Add or Concatenate two string using pointer
 #include <stdio.h>

void concatenate(char *str1, char *str2); //Function Declaration

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    concatenate(str1, str2);   //Function Call
    printf("Concatenated string: %s\n", str1);
    return 0;
}

void concatenate(char *str1, char *str2) {   //Function Defination
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}