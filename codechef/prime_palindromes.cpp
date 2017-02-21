#include<iostream>
using namespace std;

inline int palin(int n)
 {char a[20];
  int i,l=0,k=0;
  for(i=0;n!=0;i++)
   { a[i]= n%10;
     n/=10;
     l++;
   }

   for(i=0;i<l/2;i++)
   {if(a[i]==a[l-1-i]) k=1;
    else
     return 0;
   }
return 1;
 }


int main()
{ int t,i,a[20],n,c=0,l=0,k=0;
 cin>>n;
   while(1)
   { /*t=n;
       for(i=0;t!=0;i++)
      {a[i]= t%10;
       t/=10;
       l++;
      }

     for(i=0;i<l/2;i++)
     {if(a[i]==a[l-1-i]) k=1;
       else k=0;
     } */

     if(palin(n))
     { for(i=1;i<=n;i++)if(n%i==0)c++;
         if(c==2)
            { cout<<n;
             break;
            }
     }
   n++;
   }

return 0;
}
