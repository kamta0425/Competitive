def getIndex(var,bb):
    if var==1 or bb==-1:return -1
    for z in range(bb,length):  # and z*z<var
        if primes[z] > var: break 
        if var%primes[z]==0:
            return z
    return -1
def update(l,r):
    for i in range(l,r+1):
        if a[i]==1 or b[i]==-1 or c[i]==1:continue
        a[i]//=c[i]
        b[i]=getIndex(a[i],b[i])
        if b[i]==-1:c[i]=1
        else:c[i]=primes[b[i]]
limit=(10**3+3)
a=[1]*limit
a[0]=a[1]=0
primes=[]
for i in range(2,limit):
    if a[i]==1:
        for j in range(i*i, limit, i):
            a[j]=0
        primes.append(i)
length=len(primes)
//print("Primes",primes,len(primes))
t=int(input())          
for e in range(t):
    n,m=map(int,input().split())
    a,b,c=[],[-1]*(n+1),[1]*(n+1)
    a=list(map(int,input().split()))
    a.insert(0,0)
    for i in range(1,n+1):
        b[i]=getIndex(a[i],0)
        if b[i]!=-1:c[i]=primes[b[i]]
        else:c[i]=1
    for i in range(m):
        tp,l,r=map(int,input().split())
        if tp==0:
            update(l,r)
        else:
            s=set(c[l:(r+1)])
            print(max(s),end=" ")
            #print("\n",a,c,b)
    print()