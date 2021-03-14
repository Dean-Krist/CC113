#include <stdio.h>
int main()
{

    char N;
    int A, AGE;

    printf("Name: ");
    scanf("%[^\n]*s",&N);


    printf("Age: ");
    AGE = scanf("%d", &A);


    if (A >= 18 && A < 9999)
{
     printf("You are eligible for voting.");
}


    else if (AGE != 1)
    {
        printf("Invalid Age, Please Try Again.");
    }

    else
    {
        printf("You are not eligible for voting.");
    }

   return 0;
}
