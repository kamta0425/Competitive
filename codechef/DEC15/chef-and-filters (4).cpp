#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#include<cstring>
#define N 100001

char a[N][11],key[12];            /// not solved yet
static char str;
static int sum,k;

void join(char x[11],char y[11])
{ for(int i=0;i<=9;i++)
   { if( (x[i]=='+' and y[i]=='-') or (x[i]=='-' and y[i]=='+') )
       strcat(str,"+");
     else
       strcat(str,"-");
   }
}

void check(char x[11],int i)
{ if(i==k)return;
  join(x,a[i]);
  if(strcmp(key,str)==0)sum++;
  check(str,++i);
}

int main()
{ int t;
 scanf("%d",&t);
 while(t--)
 { int n,i,j,r=0;
   long long s=0,s1,p;
   char x[12];

   strcpy(key,"");

   scanf("%s %d",x,&n);
   for(i=0;x[i]!='\0';i++)      /// key string
    {if(x[i]=='w') strcat(key,"+"),r++;
     else strcat(key,"-"),p+=2;
    }
    j=s=0;
    for(i=0;i<n;i++){
       scanf("%s",x);
       if( !strcmp(key,x) )s++;
       else strcpy(a[k++],x);
    }

    if(r==10)s=pow(2,s-1);
    else if(p==20)s=pow(2,s);
    else s=0;
    sum=0;
    for(i=0;i<k-1;i++){
        for(j=1;j<k;j++){
          join(a[i],a[j]);
          if(strcmp(key,str)==0)sum++;
          check(str,++j);
        }
    }
   printf("%d\n",sum+s);
 }
return 0;
}
