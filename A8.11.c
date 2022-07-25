#include<stdio.h>
int main()
    {
       int i,j;
       char c;
       for(i=1;i<=5;i++)
          {  c='A';
            for(j=1;j<=9;j++)
               {
                 if(j>=6-i && j<=i+4)
                  { printf("%c",c);
                   j<5?c++:c--;
                   }
                 else
                   printf(" ");
               }
               printf("\n");
          }
          printf("\n");
          return 0;
    }
