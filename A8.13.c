#include<stdio.h>
int main()
    {
       int i,j;
       char c;
       for(i=1;i<=7;i++)
          {  c='A';
            for(j=1;j<=13;j++)
               {
                 if(j>8-i && j<=i+5)
                   printf(" ");
                 else
                   printf("%c",c);
                   j<7?c++:c--;
                } printf("\n");
          }
          printf("\n");
          return 0;
    }

