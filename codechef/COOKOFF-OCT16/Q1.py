t=int(input())
for e in range(t):
    n=int(input())
    a=[]
    a=list(map(int,input().split()))
    a.sort()
    f=True
    for i in range(1,len(a)):
        if abs(a[i]-a[i-1])>1:
            f=False
            break;
    if f:
        print("YES")
    else:
        print("NO")