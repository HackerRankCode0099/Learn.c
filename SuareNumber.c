// Write a program input two number,print the square of the largest number ? 


    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int a , b , num ;
        printf("Enter any two number");
        scanf("%d %d",&a,&b);

            num = (a>b) ? a : b ; printf("The square of largest number=%d",num*num);

        getch();

    }