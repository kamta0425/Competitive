t=int(input())
for e in range(t):
    ans=999999
    s1=input()
    s2=input()
    n,m=len(s1),len(s2)
    for i in range(n):
        for j in range(m):
            if s1[i]==s2[j]:
                #print(s1[i],s2[j])
                l1,l2=i,j
                r1,r2=(n-i-1),(m-j-1)
                x=abs(l1-r2)+abs(l1-l2)+abs(l2-r1)+abs(r2-r1)
                #print(l1,r1,l2,r2,"x="+str(x))
                if ans>x:
                    ans=x
    print(ans)