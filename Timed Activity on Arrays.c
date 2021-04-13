 #include <stdio.h>


  int main()
{

    int ID, Pin, Num;

    int a[3][2] = {
    {1111, 2222} ,
    {3333, 4444} ,
    {5555, 6666} ,
};

    printf("Enter Your ID NUMBER: ");
    scanf("%d", &ID);

    printf("Enter Your PIN: ");
    scanf("%d", &Pin);


    if (ID == a[0][0] && Pin == a[0][1])
    {
        int Num = a[0][0];
        printf("\nYou have successfully Logged In\nID#: %d", ID);

    }

    else if (ID == a[1][0] && Pin == a[1][1])
    {
        printf("\nYou have successfully Logged In\nID#: %d", ID);
    }

    else if (ID == a[2][0] && Pin == a[2][1])
    {
        printf("\nYou have successfully Logged In\nID#: %d", ID);
    }


    else
    {
        printf("\nInvalid ID/PIN!");
    }

}
