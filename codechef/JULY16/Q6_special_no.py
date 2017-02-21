t=int(input())
for e in range(t):
    l,r,k=map(int,input().split())
    ans=0
    for i in range(l,r+1):
        x,s,c=i,set(),0
        while x>0:
            if x%10!=0 :
                s.add(x%10)
            x=x//10
        for j in s:
            if i%j==0:
                c+=1
        if c>=k:
            ans+=1
    print(ans)