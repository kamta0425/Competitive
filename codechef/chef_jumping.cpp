#include<stdio.h>

int main()
{ int t;
scanf("%d",&t);
 while(t--)
 { int a,i,x,h=0;
   scanf("%d",&a);
     x=a/6;
   if(x*6==a) h=1;
   else
   { x=x*6;
     x++;
     if(x==a) h==1;
     x+=2;
     if(x==a)h==1;
     x+=3;
     if(x==a)h==1;

   }
   if(h==1) printf("yes\n");
   else printf("no\n");
 }


return 0;
}
