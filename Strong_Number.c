// Strong number
//  Suppose a number is 145
//  Sum of digit factorials = 1! + 4! + 5!
//                          = 1 + 24 + 120
//                          = 145
//  if sum of factorial of each digit is equal to the original num,then number is Strong number

#include <stdio.h>
int main()
{
    int n, sum = 0, r, temp;
    printf("Enter a number to check if it is a strong number or not\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        int i, fact = 1;
        for (i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (temp == sum) {
        printf("%d is a strong number\n", temp);
   } else {
        printf("%d is not a strong number\n", temp);
   }
 }
