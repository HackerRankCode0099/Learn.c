//              Write a progrma input one character from the user print the user choice operation.

        #include<stdio.h>
        #include<conio.h>
        void main()
        {
                char ch;
                int a = 15 , b = 3 , c;
                    printf("Enter any character\n");
                    scanf(" %c",&ch);
            
                        //if (ch == '+')
                        switch(ch)
                        {
                            case '+' : c = a + b ;
                                printf("Sum of two number = %d",c);
                                break;
                        
                            
                            //else if (ch == '-')
                            case '-' : c = a - b ;
                                    printf("Difference of two number = %d",c);
                                    break;
                            

                            //else if (ch == '*')
                            
                            case '*' : c = a * b ;
                                    printf("Product of two number = %d",c);
                                    break;
                            

                            //else if (ch == '/')
                            
                            case '/': c = a / b ;
                                    printf("Divide first number by second number = %d",c);
                                    break;
                            

                            //else 
                            default :
                            
                                printf("Invalid peration");
                        }    
            getch();    
        }