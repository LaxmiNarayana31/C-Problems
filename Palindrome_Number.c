
// Palindrome number  -> 121 == reverse of 121 
#include <stdio.h>
int main()
{
    int num, remainder, reverse = 0, original;
    printf("Enter the number:");
    scanf("%d", &num);

    original = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num = num / 10;
    }
    if (original == reverse)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}



// Palindrome number using Recursion
//  #include <stdio.h>

// int isPalindrome(int number, int reverse) {
//     if (number == 0) {
//         return reverse;
//     } else {
//         reverse = (reverse * 10) + (number % 10);    //remainder = number % 10
//         return isPalindrome(number / 10, reverse);
//     }
// }

// int main() {
//     int number, reverse = 0;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     reverse = isPalindrome(number, reverse);
//     if (number == reverse) {
//         printf("%d is a palindrome number\n", number);
//     } else {
//         printf("%d is not a palindrome number\n", number);
//     }
//     return 0;
// }