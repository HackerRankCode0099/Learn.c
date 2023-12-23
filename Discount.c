#include<stdio.h>
#include<conio.h>
void main()
{
    float price , Discount , Total_price;
    printf("Enter the price");
    scanf("%f",&price);

        if(price>1000)
        {
            Discount = 0.10;
        }
        else 
        {
            Discount = 0.2;
        }

            Discount = (price * Discount);
            
                printf("Discount = %f\n",Discount);

            Total_price = (price - Discount);

                printf("Total price = %f",Total_price);

    getch();
}