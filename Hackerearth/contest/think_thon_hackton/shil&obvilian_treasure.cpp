#include <iostream>
using namespace std;

int main()
{ int i,m,j,k=0,n,q,x[10000][3];
  cin>>n;
  int *a=new int[n];
  for(i=0;i<n;i++)cin>>a[i];

  cin>>q;
  int *ans=new int[q];
    for(i=0;i<q;i++)
    {   for(j=0;j<3;j++) cin>>x[i][j];

        if(x[i][0]==1)
        a[x[i][1]-1]=x[i][2];

        else  /// else if(x[i][0]==2)
        { m= (a[x[i][1]-1]>a[x[i][2]-1])?a[x[i][1]-1]:a[x[i][2]-1];
            while(1)
            { if(m%a[x[i][1]-1]==0 && m%a[x[i][2]-1]==0)break;
              m++;
            }
         ans[k]=m,k++;
        }

    }
   for(i=0;i<k;i++)cout<<ans[i]<<endl;
return 0;
}
