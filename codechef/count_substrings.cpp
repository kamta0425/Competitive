#include<stdio.h>
int main()      ///time limit exceeded 3 times
{ int i,j,t,n,s;
 char *a;
 scanf("%d",&t);
 while(t--)
  {  s=0;
    scanf("%d",&n);
    a=new char[n];
    scanf("%s",a);

    for(i=0;i<n;i++)
    if(a[i]=='1') s++;

    for(i=0;i<n;i++)
    { //if(a[i]=='1') s++;
      for(j=(i+1);j<n;j++)
      { if(a[i]=='1' && a[j]=='1' )
         s++;
      }
    }
    printf("%d\n",s);
  }


return 0;
}
