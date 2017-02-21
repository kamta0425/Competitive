#include<iostream>
#include<cstdio>

int n=100;
int i,j,numbers[100];
int primes[100];

void generatePrimes(){
    for (i=0;i<n;i++)numbers[i]=1;
    numbers[0]=numbers[1]=0;
    for (i=2;i*i<n;i++) {
        if(numbers[i]==1){
            for (j=2*i;j<=n;j+=i)
                numbers[j] = 0;
        }
    }
    j = 0;
    for (i=0;i<n;i++)
        if (numbers[i]==1)
            primes[j++] = i;
    //for(i=0;i<j;i++) printf("%d ",primes[i]); // i(0 ot 94) j=95
}

void generatePrimes2(){
    int i,j,x=1002;
    for (i=0;i<1002;i++)a[i]=1;
    a[0]=a[1]=0;
    for (i=2;i<x;i++) {
        if(a[i]==1){
            primes.push_back(i);
            for(j=2*i;j<1002;j+=i)
                a[j] = 0;
        }
    }
}

int main(){
	generatePrimes();
	return ;
}
/*
int main(){
    for (i=0;i<n;i++)numbers[i]=1;
    numbers[0]=numbers[1]=0;
    for (i=2;i*i<n;i++) {
        if(numbers[i]==1){
            for (j=2*i;j<=n;j+=i)
                numbers[j] = 0;
        }
    }
    j = 0;
    for (i=0;i<n;i++)
        if (numbers[i]==1)
            primes[j++] = i;
    for (i=0;i < n;i++)printf("%d ",primes[i]);

return 0;
}
*/
