t=int(input())
for e in range(t):
    ans=999999
    s1=input()
    s2=input()
    a,b=[],[]
    for i in range(26):
        a.append([])
        b.append([])
    for i in range(len(s1)):
        a[ord(s1[i])-65].append(i)
    for j in range(len(s2)):
        b[ord(s2[j])-65].append(j)
    for k in range(26):
        if len(a[k])==0 or len(b[k])==0:
            continue
        for i in range(len(a[k])):
            for j in range(len(b[k])):
                l1,l2=a[k][i],b[k][j]
                r1,r2=(len(s1)-a[k][i]-1),(len(s2)-b[k][j]-1)
                x=abs(l1-r2)+abs(l1-l2)+abs(l2-r1)+abs(r2-r1)
                if ans>x:
                    ans=x
    print(ans)