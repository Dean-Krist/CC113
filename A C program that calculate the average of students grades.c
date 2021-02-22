#include <stdio.h>
int main()
{

    int Eng, Math, Fil, Mapeh ,Sci, Total, Average;
    printf ("Enter English Grade: ");
    scanf("%d",&Eng);

    printf ("Enter Mathematics Grade: ");
    scanf("%d",&Math);

    printf ("Enter Filipino Grade: ");
    scanf("%d",&Fil);

    printf ("Enter MAPEH Grade: ");
    scanf("%d",&Mapeh);

    printf ("Enter Science Grade: ");
    scanf("%d",&Sci);


    Total = Eng + Math + Fil + Mapeh + Sci;

    Average = Total / 5;
    printf("Total Average = %d\n", Average);


}
