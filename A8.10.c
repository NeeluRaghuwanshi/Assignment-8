#include<stdio.h>
int main()
    {
       int i,j,c;
       for(i=1;i<=5;i++)
          {  c=1;
            for(j=1;j<=7;j++)
               {
                 if(j>5-i && j<=i+2)
                   printf(" ");
                 else
                   printf("%d",c);
                   j<4?c++:c--;
                } printf("\n");
          }
          printf("\n");
          return 0;
    }

