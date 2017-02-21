#include<stdio.h>
#include<iostream>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

char a[52][202];
char c[1000];
char *b;

int main()         /// unable to solve string character problem in cpp
{  int t;          /// but after contest solved in solved in python
  scanf("%d",&t);
    while(t--)
   {
    int i=0,k=0,j=0,s=0;
    char c;
     c=getchar();
     while(c!='\n')
     {
       if(c>=48 and c<=57) s+=(48+(int)c);
       /*else if(c==' ')
       { j++;
       }
       else
       {
         b=&c;
         strcat(a[j++],b);
       }
      c=getchar();*/
     }
     //sort(a,a+j);
    /*for(i=0;i<j;i++)
      printf("%s\n",a[i]);*/
    printf("\n%d",s);
   }
return 0;
}
