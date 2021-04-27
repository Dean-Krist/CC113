#include <stdio.h>
#include <string.h>

    int main()
 {

    char A[50];
    char B[50];

    int i,V=0,C=0;                                    //counters


    printf("Input a Sentence: ");
    scanf(" %[^\n]s\n",A);


    strcpy(B, A);                                    // string copier

    printf("String Converted: ");
    puts(B);                                         // prints the string that was copied


    printf("\nString length: %zu \n",strlen(B));      // string length counter


    for(i=0;B[i];i++)
    {
    	if((B[i]>=65 && B[i]<=90)|| (B[i]>=97 && B[i]<=122)) //if B or the string belongs in a letter in ascii
    	{

            if(B[i]=='a'|| B[i]=='e'||B[i]=='i'||B[i]=='o'||B[i]=='u'||B[i]=='A'||B[i]=='E'||B[i]=='I'||B[i]=='O' ||B[i]=='U') V++;  //if a vowel is detected, it ads one in the vowel counter

            else
             C++;                                      //if a consonant is detected, it ads one in the consonant counter
        }

 	}


    printf("vowels: %d\n",V);               //Prints the counter for Vowel
    printf("consonants:  %d\n",C);          //Prints the counter for Consonant




return 0;
}


