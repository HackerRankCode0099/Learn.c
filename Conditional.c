//                              Write a program print Largest of three number ?


    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int a , b , c;
        printf("Enter any three number");
        scanf("%d%d%d",&a,&b,&c);

            (a>b) ? (a>c) ? printf("%d",a) : printf("%d",c) : (b>c) ? printf("%d",b) : printf("%d",c);
                                                                        
        getch();    
        
    }