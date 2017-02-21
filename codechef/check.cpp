#include<iostream>
using namespace std;
#include<string.h>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<windows.h>
#include<conio.h>
#include<vector>
#include <time.h>

#include <cstdio>
#include <vector>

int len = 100002;
int arr[100];
vector<int> v;
int main()            ///sieve of erastosene
{
    for (int i = 2; i < 100; i++){
        for(int j = i * i; j < 100; j+=i){
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 100; i++){
        if (arr[i - 1] == 0)
            v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++){
     printf("%d  ",v[i]);
     if(i%10==0)printf("\n");
    }

return 0;
}
/*
int main(){
    for(int i=1;i<=11;i++){
        if((24*i)%11==1 )
            {cout<<i<<" "<<264%11;
            break;
            }
    }


return 0;
}
*/

/*int editDistance(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    // for all i, j, dp[i][j] will hold the edit distance between the first
    // i characters of source string and first j characters of target string
    int dp[m + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    // source can be transformed into target prefix by inserting
    // all of the characters in the prefix
    for (int i = 1; i <= m; i++) {
        dp[0][i] = i;
    }
    // source prefixes can be transformed into empty string by
    // by deleting all of the characters
    for (int i = 1; i <= n; i++) {
        dp[i][0] = i;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1]; // no operation required as characters are the same
            }
            else {
                dp[i][j] = 1 + min(dp[i - 1][j - 1],    // substitution
                        min(dp[i][j - 1],     // insertion
                            dp[i - 1][j]));    // deletion
            }
        }
    }
    return dp[m][n];
}

int main()
{
    /*clock_t t1,t2;
    int s=1;
    t1=clock();
    //code goes here
    cout<<"Hello world";
    for(int i=0;i<10000000;i++){
       s*=i;
    }
    t2=clock();
    float diff ((float)t2-(float)t1);
    cout<<endl<<diff/ CLOCKS_PER_SEC<<endl;
    //system ("pause");*/
 /*   string s("kamta");
    string s1("ad");
    cout<<editDistance( s,s1);
    return 0;
}

int main( )
{
   // current date/time based on current system
   time_t now = time(0);

   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
}


/*
void scanint(int &x)
{   register int c = getchar();
    x = 0;
    for(;(c<48 || c>57);c = getchar());
    for(;c>47 && c<58;c = getchar())
    { x = (x<<1) + (x<<3) + c - 48; }
}

inline int read()
{
    char c;
    int n = 0;
	while ((c = gc()) < 48)
	;
	n += (c - '0');
	while ((c = gc()) >= 48)
	n = n * 10 + (c - '0');
	return n;
}

inline void fastwrite(int a){
    char snum[20];
	int i=0;
	do
	{
		snum[i++]=a%10+48;
		a=a/10;
	}
	while(a!=0);
	i=i-1;
	while(i>=0)
	//pc(snum[i--]);
	//pc('\n');
	putchar_unlocked(snum[i--]);
	putchar_unlocked('\n');
}

*/

