// Power of any number
 #include <stdio.h>
 #include <math.h>

int main() {
    double base, exponent, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

     printf("%.2lf^%.2lf = %.2lf\n", base, exponent, result);   // .2lf meaning result print upto 2 decimol places
      //printf("%.2lf",result);

    return 0;
}




// Power of any number using Recursion
//  #include <stdio.h>

// int power(int base, int exponent);
// int main(){
//     int base, exponent, result;

//     printf("Enter the base number: ");
//     scanf("%d", &base);

//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);

//     result = power(base,exponent);

//     printf("%d ^ %d = %d\n", base, exponent, result);

//     return 0;
// }

// int power(int base, int exponent) {
// if (exponent == 0) {
//         return 1;
//     } else {
//         return base * power(base, exponent - 1);
//     }
// }