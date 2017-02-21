#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ float y;
int x;
  cin>>x;
  cin>>y;
  if ( x>0 )
  {
     if ( x%5==0 && x<=2000 && (float)x<=(y-0.5))
     { cout<<fixed<<setprecision (2)<<(y-(float)x-0.5);
     }
     else
        cout<<fixed<<setprecision (2)<<y;
  }
return 0;
}
