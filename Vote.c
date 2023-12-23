//              Write a program to check whether thr person eligible for vote or note ?

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int age ;
        printf("Enter the age");
        scanf("%d",&age);

            (age>=18) ? printf("Eligible for vote") : printf("Not Eligible for vote");

        getch();
    }


