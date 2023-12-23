//              Write a program check the largest number.

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int a , b ;
        printf("Enter two number\n");
        scanf("%d %d",&a,&b);

        if(a>b)
        {
            printf("a is Largest");
        }
        else 
        {
            printf("b is Largest");
        }

        getch();
        
    }