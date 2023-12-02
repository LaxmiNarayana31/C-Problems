// Calculate the sum of all prime numbers stored in a 1D array based on user input
 #include <stdio.h>

int isPrime(int num) {
    int i;
    if (num < 2) {
        return 0;
    }
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[100], n, i, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }
    printf("Sum of all prime numbers in the array is %d", sum);
    return 0;
}
