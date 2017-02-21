#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
                     //incomplete
int p(int x)
{ int i;
   for(i=0;i<=23;i++)
   {   if(x>=pow(2,i))
       {if(x==pow(2,i)) return 1;
       }
       else break;
   }
return 0;
}

int main()
{ int t,i;
  int a,b;
  cin>>t;
  int c[t];
  if(t>0 && t<=200)
  { for(i=0;i<t;i++)
     { c[i]=0;
      cin>>a>>b;
      if(a>=1 && a<=pow(10,7) && b>=1 && b<=pow(10,7) && p(b)==1)
      {     if(a==b) c[i]=0;
            else if(a<b && p(a)==1)
                    {  while(1)
                      {a=a*2; c[i]++; if(a==b) break;}
                    }
            else if(a<b && p(a)==0)
                    { a=1; c[i]++;
                      while(1)
                      { a*=2; c[i]++; if(a==b) break;}
                    }
            else if(a>b && p(a)==1)
                    { while(1)
                      {a=a/2; c[i]++; if(a==b) break;}
                    }
            else if(a>b && p(a)==0)
                    { a=1; c[i]++;
                      while(1)
                      { if(a==b) break; a=a*2; c[i]++;}
                    }

      }
      else exit(0);
     }
   for(i=0;i<t;i++)
    cout<<c[i]<<endl;
  }

return 0;
}
