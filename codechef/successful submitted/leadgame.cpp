#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{ int n,i,f=0,s=0;
  cin>>n;
  int *p1= new int[n];
  int *p2= new int[n];
  for(i=0;i<n;i++)
  { cin>>p1[i]>>p2[i];
    //if(p1[i]=p2[i]) exit(0);

        if(i>0)
         {p1[i]=p1[i]+p1[i-1];
          p2[i]=p2[i]+p2[i-1];
         }
       if(p1[i]>p2[i])
         {if(f<(p1[i]-p2[i]))
          f=p1[i]-p2[i];
         }
        else if(p1[i]<p2[i])
         {if(s<(p2[i]-p1[i]))
          s=p2[i]-p1[i];
         }
  }
       if (f>s)    cout<<1<<" "<<f;
       else if(f<s) cout<<2<<" "<<s;
       else exit(0);


return 0;
}
