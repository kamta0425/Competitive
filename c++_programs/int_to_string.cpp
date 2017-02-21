#include<sstream>
#include<iostream>
using namespace std;

int main()
{
    int i = 43;
    std::stringstream ss;
    ss << i;

    std::string str;
    ss >> str;

    std::cout << str;

    cout<<endl<<(str[0]+str[1])<<endl;
  string g;
  cin>>g;
  cout<<g[2]+g[0];
return 0;
}
