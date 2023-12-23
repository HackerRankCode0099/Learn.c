#include<stdio.h>
#include<conio.h>
void main()
{
    int a , b , Sum , Product;
    printf("Enter any number");
    scanf("%d %d", &a, &b);

        if(a>10 && b>10)
        {
            Sum = (a + b);
            
                printf("Sum = %d",Sum);

        }      

        else
        {
            Product = (a * b);

                printf("Product = %d",Product);
        }

    getch();
}
