// Perfect number program
// Check the number is perrfect number or not
//  Example : 28
//  All divisor of 28 is 1,2,7,4,14.
//  the sum of all divisors are 1+2+7+4+14=28, so 28 is Perfect number

#include<stdio.h>
int main ()
{
    int num, sum=0, i;
    printf("Enter a number to check the number is perfect or not:");
    scanf("%d", &num);

    for (i = 1; i< num;i++){ //Finding Sum
        if(num % i==0) {
            sum = sum + i;
        }
    }
    if(sum==num){
        printf("Perfect number");
        }  else  {
        printf("Not perfect number");
        }
    return 0;
}