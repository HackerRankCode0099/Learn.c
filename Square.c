#include<stdio.h>
#include<conio.h>
void main()
{
    int num , Square , Cube ;
    printf("Enter any number");
    scanf("%d",&num);

        if(num==3 || num==7)
        {
            Square = (num * num);
                printf("Square = %d",Square);
        }
        else
        {
            Cube = (num * num * num);
                printf("Cube = %d",Cube);
        }
    getch();
}