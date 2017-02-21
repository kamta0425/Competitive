#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector<int> primes;

void generatePrimes(){
    int i,j,k,z,x=998;
    for (i=2;i<x;i++)primes.push_back(i);
    for (i=0;i<primes.size();i++) {
        j=i+1;z=primes[i];
        k=z*z;
        while(j<primes.size()){
            if(primes[j]==k){
                primes.erase(primes.begin()+j);
                k+=z;
            }else if(k<primes[j]){
                k+=z;
            }
            else j++;
        }
    }
}

int main() {

    generatePrimes();

    for (int i=0;i<primes.size();i++)printf("%d ",primes[i]);

    cout<<endl<<"len = "<<primes.size();

	return 0;
}
