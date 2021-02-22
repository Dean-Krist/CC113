#include<stdio.h>
int main()
{


    float a, b, Sum, Diff, Mul, Div;

    printf("Enter 1st Number: ");
    scanf("%f", &a);

    printf("Enter 2nd Number: ");
    scanf("%f", &b);



    Sum = a + b;
    printf("ADD: %.0f\n", Sum);

    Mul= a * b;
    printf("MUL: %.0f\n", Mul);

    Div = a / b;
    printf("DIV: %.1f\n", Div);

    Diff = a - b;
    printf("SUB: %.0f\n", Diff);



}
