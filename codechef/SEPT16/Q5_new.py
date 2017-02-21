def get(l,r):
    sz,result=len(x),1
    for i in range(l,r+1):
        if a[i]==1:
            continue
        if a[i]%2==0:
            result=max(result,2)
            continue
        if a[i]%3==0:
            result=max(result,3)
            continue
        if a[i]%5==0:
            result=max(result,5)
            continue
        for j in range(3,sz):
            if a[i] in x[j]:
                result=max(result,x[j][0])
    return result
    
def update(l,r):
    sz=len(x)
    for i in range(l,r+1):
        if a[i]==1:
            continue
        if a[i]%2==0:
            a[i]//=2
            continue
        if a[i]%3==0:
            a[i]//=3
            continue
        if a[i]%5==0:
            a[i]//=5
            continue
        for j in range(sz):
	        if a[i] in x[j]:
	            a[i]//=x[j][0]

limit=(10**6+3)
a=[1]*limit
a[0]=a[1]=0
primes,x=[],[]
for i in range(2,limit):
    if a[i]==1:
        b=[]
        b.append(i)
        primes.append(i)
        for j in range(i*i, limit, i):
            if a[j]!=0:b.append(j)
            a[j]=0
        if len(b)>0:x.append(b)
length=len(primes)
#print(0,x[0])

t=int(input())          
for e in range(t):
    n,m=map(int,input().split())
    a,b,c=[],[-1]*(n+1),[1]*(n+1)
    a=list(map(int,input().split()))
    a.insert(0,0)
    for i in range(m):
        tp,l,r=map(int,input().split())
        if tp==0:
            update(l,r)
        else:
            ans=get(l,r)
            print(ans,end=" ")
        #print(a)
    print()