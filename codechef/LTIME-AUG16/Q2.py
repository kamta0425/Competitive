t=int(input())
for j in range(t):
    a,x=[],[]
    n=int(input())
    for i in range(n):
        x=list(map(int,input().split()))
        a.append(x)
    x=list(map(int,input().split()))
    if n==1:
        z=a[0][len(a[0]):0:-1]
        #z.reverse()
        if z==x:
            print("Yes")
        else:
            print("No")
        #print(z,x)
        continue
    print("Yes")