#include <iostream>
#include<string.h>
using namespace std;

int main()
{ int i,j,t;
cin>>t;
  while(t--)
  { chat a[1000000],b[1000000],x[1000000];
    int k=0;
    cin>>a>>b;
    for(i=0;i<strlen(b);i++)
    {  k=0;
        for(j=0;j<strlen(a);j++)
       { if(b[i]==a[j])k++;

       }
      x[i]=k;
    }
    cout << "Hello World!" << endl;
  }
return 0;
}
