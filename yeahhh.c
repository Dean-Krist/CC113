#include <stdio.h>


int main()
{
    int a[10],i,n,sum=0;

    printf("Size of array : ");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        printf("elements %d: ", i+1);
        scanf("%d",&a[i]);
    }


    for(i=0; i<n; i++)
    {

        sum+=a[i];
    }
     printf("sum of array is : %d",sum);

    return 0;
}
