//            Write a program to input one character from the user , print the capital vowel.

        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            char ch;
            printf("Enter any character");
            scanf(" %c",&ch);
            
               // if (ch == 'A')
                switch (ch)
                {
                    case 'A' :
                        printf("It is a capital vowel A");
                        break;

                    //else if (ch == 'E' )
                    case 'E' :
                        printf("It is a capital vowel E");
                        break;

                    //else if (ch == 'I')
                    case 'I' :
                        printf("It is a capital vowel I");
                        break;
            
                    //else if (ch == 'O')
                    case 'O' :
                        printf("It is a capital vowel O");
                        break;

                    //else if (ch == 'U')
                    case 'u' :
                        printf("It is a capital vowel U");
                        break;

                    //else
                    default :
                    {
                        printf("Not a capital vowel");
                        break;
                    }

                }

            getch();       
                
        }