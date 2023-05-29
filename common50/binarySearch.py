def binarySearch(n,k):
    s = 0
    e = len(n)
    while(s<=e):
        mid = (s+e)//2
        if(n[mid]==k):
            print("Yes")
        elif(n[mid] < k):
            s = mid
        else:
            mid = e
n = [1,2,3,4,5,6]
l = len(n)
binarySearch(n,2)