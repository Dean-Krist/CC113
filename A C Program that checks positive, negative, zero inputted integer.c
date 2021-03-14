#include <stdio.h>
int main()
{
    int num;

    printf("Input any integer: ");
    scanf("%d", &num);


        switch (num >= 1)
        {
            case 1:
                printf("The integer is a positive number.");
                break;

            default:
                switch (num <= -1)
                {
                    case 1:
                        printf("The integer is a negative number.");
                        break;

                    default:
                        printf("The Inputted Data is Zero");
                        break;

                        }
                }







    return 0;
}
