#include <stdio.h>

int fibonacci(int num) {           //fibonacci() funtion definition

    if (num == 0)       // first base condition check
    {
        return 0;       // retuning 0, if condition meets
    }
    // second base condition check
    else if (num == 1)
    {
        return 1; // returning 1, if condition meets
    }
     else {
        return fibonacci(num - 1) + fibonacci(num - 2); // recursively calling the fibonacc() function and then adding them
    }
}

int main()
{
    int num;
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("\t %d", fibonacci(i)); // calling fibonacci() function for each iteration and printing the returned value
    }

    return 0;
}