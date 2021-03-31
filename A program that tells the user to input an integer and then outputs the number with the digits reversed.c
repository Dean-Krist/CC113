#include <stdio.h>
int main()
{

    int x, y = 0, z;

    printf("Input any integer: ");
    z = scanf("%d", &x);            //The integer or the data that is about to be inputted will be automatically be equal to Z



    if(z != 1)
    {
        printf("The inputted data is Invalid.");        // if the inputted data is not a number or an integer this will print
    }

    else
    {
    printf("Revised for %d is ", x);                    // if the inputted data is valid, it will print this first

    while(x != 0)
    {
        y = y * 10;                 //I've searched this on google on how to reverse or flip numbers and they gave me this equation
        y = y + x%10;
        x = x/10;
    }
    printf("%d", y);                                    // then this will follow after the first print action
}

  return 0;
}
