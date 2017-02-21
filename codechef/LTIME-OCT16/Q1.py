t=int(input())
for e in range(t):
    m1,m2,m3=map(int,input().split())
    o1,o2,o3=map(int,input().split())
    p1,p2,p3=map(int,input().split())
    x,y,z=m1+m2+m3,o1+o2+o3,p1+p2+p3
    a,b,c=m1+o1+p1,m2+o2+p2,m3+o3+p3
    a=[a,b,c,x,y,z]
    a.sort(reverse=True)
    ans=0
    if a[0]==0:
        ans=0
    elif a[0]%2==0:
        ans=a[0]-1
    else:
        ans=a[0]
    print(ans)
    #print(a)