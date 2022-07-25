#include<stdio.h>
int main()
    {
       int i,j,c=1;
       for(i=1;i<=4;i++)
          {   c=1;
            for(j=1;j<=7;j++)
               {
                 if(j>=i && j<=8-i)
                 {
                  printf("%d",c);
                  j<4?c++:c--;
                 }
                 else
                   printf(" ");
               }
               printf("\n");
          }
          printf("\n");
          return 0;
    }
