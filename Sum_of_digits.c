// Sum of digits of a number
#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    // calculate the sum of digits
    while (n > 0) {
        digit = n % 10; // get the last digit
        sum += digit; // add the digit to the sum      sum += digit -> sum = sum + digit
        n = n / 10; // remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}