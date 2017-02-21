#include<iostream>
using namespace std;

  void add(int a[3][3])   //size necessary for 2D array
  { int i,j;
   cout<<"Enter matrix of size 3x3"<<endl;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) cin>>a[i][j];
  }

int main()
{ int i,j,k;
  int m1[3][3],m2[3][3],m3[3][3];
  add(m1);
  add(m2);

    for(k=0;k<3;k++)
    {
      for(i=0;i<3;i++)
      {
       m3[i][k]=0;
      for(j=0;j<3;j++)
      m3[i][k]+=m1[i][j]*m2[j][k];
      }
    }
    for(i=0;i<3;i++)
      {  for(j=0;j<3;j++)
          cout<<m3[i][j]<<" ";
       cout<<endl;
      }
return 0;
}
