#include <iostream>
#include<set>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    int a[]={9,7,23,43,233,1,2,3,4,6};
	set<int> s(a+2,a+5+1);
	set<int> s1(a+3,a+5+1);  // set with sub-array
	set<int> s(a+l,a+(r+1));
    set<int> r[5][5];        // set array
	r[0][0]=r[2][0];         // set a to set b assing possible
	set<int>::iterator it;
	for(set<int>::iterator it=s.begin();it!=s.end();it++)cout<<*it<<" ";
    printf("\n%d ",*(s.rbegin()) );
	s.erase(43);
 	s.insert(4);
	s.insert(5);
	s.insert(49);
	s.insert(2);
	if(s.empty())
	if(r[1][3]==r[1][4])printf("yes equal");  // direct comparison possible
	else printf("No not equal");
	vector<int> v;
	set<int>::iterator it;
    set_intersection(s.begin(), s.end(), s1.begin(), s1.end(),back_inserter(v));
    set_intersection(s.begin(), s.end(), s1.begin(), s1.end(),back_inserter(v));
	printf("s = ");for(it=s.begin(); it!=s.end(); ++it)printf("%d ",*it);
	printf("\n");
    printf("s1= ");for(it=s1.begin(); it!=s1.end(); ++it)printf("%d ",*it);
    printf("\n");
    printf("v= ");for(int i=0; i<v.size(); i++)printf("%d ",v[i]);

    s.find(23) return iterator within size if found else iterator of end
	if(s.find(42) != s.end())cout<<"yes";
    s.clear() clear all data in set
	return 0;
}

/*
11 12 13 14 15 16
21 22 23 24 25 26
31 32 33 34 35 36
41 42 43 44 45 46
*/









