// //Reverse a String using Pointer
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *p, *q, temp;
    printf("Enter a string: ");
    scanf("%s",& str);
    p = str;
    
    q = str + strlen(str) - 1;   //it points to last character of the String Ex-Shiva   then q ponts to a
   
    while (p < q) {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
    printf("Reverse of the string: %s\n", str);
    return 0;
}