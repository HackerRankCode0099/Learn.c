//              Write a program to input one day number from the user,print the weeks name. 


        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            int num;
            printf("Enter any number");
            scanf("%d",&num);

               // if(num==1)

               switch (num)
               {
                    case 1 :
                        printf("Sunday");
                        break;

                    //else if (num==2)
                    case 2 :
                        printf("Monday");
                        break;

                    //else if (num==3)
                    case 3 :
                        printf("Tuesday");
                        break;

                    //else if (num==4)
                    case 4 :
                        printf("Wednesday");
                        break;
                    
                    //else if (num==5)
                    case 5 :
                        printf("Thursday");
                        break;

                    //else if (num==6)
                    case 6 :
                        printf("Friday");
                        break;

                    //else if (num==7)
                    case 7 :
                        printf("Saturday");
                        break;

                    /*else
                    {
                        printf("Ivalid user input");
                    } */
                    default :
                    {
                        printf("Please enter 1 to 7 valid");  
                        break;  
                    }   
               }

            getch();    
        }