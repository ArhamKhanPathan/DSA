T = int(input())
for i in range(T):
    X,Y = map(int,input().split())
    if(X!=Y):
        Z = (X+Y)//2
        a = abs(X-Z)
        b = abs(Y-Z)
        print(max(a,b))




