/* Write a program to input one number from the user if the last digit of number is multiple of 3 or multiple of 5 then
   print the BHARAT MATA KI JAY otherwise print the Programmer. */

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int num , Last_Digit;
        printf("Enter any number");
        scanf("%d",&num);

            Last_Digit = num % 10;

                if(Last_Digit % 3 == 0 || Last_Digit % 7 == 0)
                    {
                        printf("BHARAT MATA KI JAY");
                    }

                else
                {
                    printf("PROGRAMMER");
                }

        getch();
            
    }