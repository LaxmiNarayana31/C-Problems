//Armstrong number
// 153 = (1*1*1)+(5*5*5)+(3*3*3)
// where:
// (1*1*1)=1
// (5*5*5)=125
// (3*3*3)=27
// So,  1+125+27=153  ->153 is Armstrong number

#include<stdio.h>
int main ()
{
    int num, rem, sum = 0, temp;
    printf("Enter a number to check the number is Armstrong or not:");
    scanf("%d", &num);

    temp = num;
    while(num>0){
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
   if(sum==temp){
        printf(" Armstrong number");
   } else {
       printf("Not a armstrong number");
   }

    return 0;
}