// Sum of n natural numbers
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {          //Formula = (n * (n+1))/2
        sum += i;
    }
    printf("Sum of first %d natural numbers is %d", n, sum);
    return 0;
}

// Sum of n natural numbers using recursion
// #include <stdio.h>

// int sum(int n) {
//     if (n == 1) {
//         return 1;
//     } else {
//         return n + sum(n-1);
//     }
// }

// int main() {
//     int n, s;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     s = sum(n);
//     printf("Sum of first %d natural numbers is %d", n, s);
//     return 0;
// }