def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x

t=int(input())
for e in range(t):
    n=int(input())
    a,b,c=[],[0]*(10**5+2),[]
    k,x,ans,p=1,1,0,1
    a=list(map(int,input().split()))
    a=list(filter(lambda x: x != 1, a))
    #print(b[:len(a)])
    for i in range(0,len(a)-1):
        k,x,f=1,i,False
        b[i]=1
        for j in range(i+1,len(a)):
            if gcd(a[x],a[j])>1:
                if b[i]>(k+1):
                    f=True
                    break
                x+=1
                k+=1
                b[j]=k
                #print("(",i,",",j,")")
        if f:break
        ans=max(ans,k)
    #print(b[:len(a)])
    print(ans)