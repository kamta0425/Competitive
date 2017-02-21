#include<iostream>
using namespace std;
#include<string>
#include<cstdio>
#include<algorithm>

int main(){
  string s="vanraaj kumar";
  //string::iterator i;
  int t=0;
  //getline(cin,s);
  //for(i=s.begin();i!=s.end();i++);
  for(int i = s.find("cat", 0); i != string::npos; i = s.find("cat", i)){
    t++;
    i++;
  }
  ///s=s.insert(1,"kps");
  ///s.erase(2,4);
  ///s=s.substr(1,5);
  ///s+='v';
  sort(s.begin(),s.end());
  ///s.clear();
  cout<<s<<" "<<endl;
  ///char c=s[0];
  ///cout<<c;
  int len=s.length();
  ///cin.get(a,20);   for character array- char a[20];
  ///cout<<a;
  return 0;
}

