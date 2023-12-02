#include<stdio.h>     //Reverse number
int main ()
{
    int num;
    int remainder, reverse = 0; //reverse = 0 because reverse variable may be contain garbage value
    printf("Enter a number:");
    scanf("%d",&num);

    while(num>0) {                  // You also use while(num!=0)
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num = num/10;                  //remainder=num%10;    reverse=remainnder+(num%10);  num=num%10;
    }
    printf("The reverse number is %d", reverse);
    return 0;
}

// Reverse number using Recursion
//  #include<stdio.h>

// int reverse(int , int );

// int main()
// {
//     int number, result;
//     printf("Enter number: ");
//     scanf("%d", &number);
//     /* Second argument must be 0 while calling function */
//     result = reverse(number, 0);

//     printf("Reverse of %d is %d.", number, result);
//     return 0;
// }

// int reverse(int num, int rev)
// {
//     if(num==0)
//         return rev;
//     else
//         return reverse (num/10, rev * 10 + num % 10);
// }