/* Write a program input of five subject from the user.print intelligent if total marks is greater than or equal to 480,
   otherwise print Nalayak padhle. */

   #include<stdio.h>
   #include<conio.h>
   void main()
   {
        int Marks , P , C , M , B , E  ;

        printf("Enter Marks of five subject");

        scanf("%d %d %d %d %d", &P,&C,&M,&B,&E);

        Marks = (P+C+M+B+E);
 
        if (Marks>=400 && Marks<=480)    
        {
            printf("Intelligent");
        }

        else
        {
            printf("Nalayak padhle");
        }

        getch();

    }
