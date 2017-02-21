#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
 int main ()
 { int t;
 scanf("%d",&t);
 while(t--)
 { int i,c=1,s=0,g=0;
   char a[205];
   scanf("%s",a);
   sort(a,a+strlen(a) );
   for(i=1;i<strlen(a);i++)
   { if(a[i-1]==a[i])c++;
     else if(c>1)
      { g+=c;
        if(c%2==0)
         s+=(c/2);
        else
         s+=(c+1)/2;
        c=1;
      }
   }
   if(c>1){
      g+=c;
      if(c%2==0)s+=(c/2);
      else      s+=(c+1)/2;
      c=1;
   }
 s+=strlen(a)-g;
printf("%d\n",s);
 }
return 0;
 }
