//          Write a program print the smallest of two number ?

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int a , b ;
        printf("Enter any two number");
        scanf("%d%d", &a,&b);

            (a<b) ? printf("%d", a) : printf("%d",b);

        getch();
    }