def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x

t=int(input())
for e in range(t):
    n=int(input())
    a,b,c,ans=[],[-1]*(10**5+2),[],0
    k,p,j=1,1,0
    a=list(map(int,input().split()))
    a=list(filter(lambda x: x != 1, a))
    if gcd(a[0],a[1])<=1:
        c.append(0)
    for i in range(1,len(a)):
        if gcd(a[j],a[i])>1:
            print(i)
            b[i]=k
            k,p=k+1,p+1
            j=i
        else:
            c.append(i)
        print(j)
    print(ans,len(a),a,c)