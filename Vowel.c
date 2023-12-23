/* Write a program to input one character from the user.check whether the character is smallvowel or not. */

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        char ch;
        printf("Enter any character");
        scanf(" %c",&ch);

            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U')

                printf("It is vowel");

                else
                {
                    printf("It is consonent");
                }

            getch();
        }