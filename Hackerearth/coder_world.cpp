#include<stdio.h>
#include<string.h>
int main()
{ int t;
scanf("%d",&t);
while(t--)
 { int i,c=0,k=0,d;
   char a[1000000];
   scanf("%s",a);
   for(i=0;i<(strlen(a)-1);i++)
   { d=a[i+1]-a[i];
       if(d>0 && d<=5)
       { c++;
          if(c==4){k=1;break;}
       }

   }
   if(k==1) printf("good\n");
   else printf("not good\n");

 }
return 0;
}
