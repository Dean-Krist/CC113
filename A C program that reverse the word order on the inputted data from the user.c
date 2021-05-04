#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];

    printf("Enter any string: ");
    scanf(" %[^\n]s\n",str);



    Baliktader(str);

}



void Baliktader(char str[])
{

    int length = strlen(str);

printf("\nReverse Ordered Words: ");


    int i;
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {




            str[i] = '\0';


            printf("%s ", &(str[i]) + 1);
        }
    }


    printf("%s", str);
    return 0;
}














