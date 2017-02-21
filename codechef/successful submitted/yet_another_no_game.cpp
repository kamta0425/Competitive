#include<iostream>
using namespace std;

int main()
{ long t;
  long long n;
  cin>>t;
  while(t--)
  { cin>>n;
      if(n%2==0)
        cout<<"ALICE"<<endl;
      else cout<<"BOB"<<endl;
  }
    return 0;
}
