// //Fatorial of a number
#include<stdio.h>
int main()
{
 int i,fact=1,number;

 printf("Enter a number: ");
  scanf("%d",&number);

    for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("Factorial of %d is: %d",number,fact);
  return 0;
}



// Factorial of a number using Recursion
//  #include <stdio.h>

// int factorial(int n);

// int main() {
//     int n, result;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     result = factorial(n);

//     printf("Factorial of %d = %d\n", n, result);

//     return 0;
// }

// int factorial(int n) {
//     if(n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }