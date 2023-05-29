# T = int(input())
# for i in range(T):
#     ans=0
#     N,X = map(int,input().split())
#     for j in range(N):
#         Si,Ri = map(int,input().split())
#         if(X>=Si and ans<Ri):
#             ans = Ri
#     print(ans)

# T = int(input())
# for i in range(T):
#     N,K = map(int,input().split())
#     ar = []
#     if(N>K):
#         while(N>=0):
#             N = N-K
#             ar.append(N)
#             ar.sort()
#         print(ar[1])
#     elif(N==K):
#         print(0)
#     elif(N<K):
#         print(N)

# T = int(input())
# for i in range(T):
#     N,K = map(int,input().split())
#     if N > K :
#         print(N%K)
#     elif N < K:
#         print(N)
#     else:
#         print(0)


# T = int(input())
# for i in range(T):
#     N = int(input())
#     if(N%2==0):
#         print("Enter Odd Value!!")
#     else:
#         print((N//2)+1)

# cook your dish here
# T = int(input())
# for i in range(T):
#     A, B, C = map(int, input().split())
#     if A>B>C:
#         print(A*B)
#     elif A>C>B:
#         print(A*C)
#     elif B>A>C:
#         print(B*A)
#     elif B>C>A:
#         print(B*C)
#     elif C>A>B:
#         print(C*B)
#     elif C>B>A:
#         print(C*B)

# cook your dish here
# T = int(input())
# for i in range(T):
#     A, B, M = map(int, input().split())
#     if (1 <= A, B <= M and A != B):
#
#         if (B > (M // 2) and A < B):
#             print(f"{(M - B) + 1}")
#
#         elif (A > B):
#             print(f"{A - B}")
#
#         elif (B <= (M // 2)):
#             print(f"{(B - A)}")
# cook your dish here
# T = int(input())
# for i in range(T):
#     N,X = map(int,input().split())
#     S = []
#     for j in range(N):
#         S = []
#         S.append(S)
#     mean =


# c = 0
# s = input()
# e = input()
# for i in range(len(s)):
#     if s[i]==e:
#         c+=1
# print(c)

# n = int(input())
# l =[]
# for i in range(1,n+1):
#     x = int(input())
#     l.append(x)

# l.sort()
# res = [l[i] for i in range(len(l)) if i % 2 == 0]
# or
# print(res)
# li = [1,5,7,8,9,7]
# start = 3
# end = 6
# l = []
# while(start<<end):
#     l.append
# print(l)

# lap =
# li = ["a","v","i","k","e","l"]
# l = []
# for i in range(len(li)):
#     if(li[i] != "a" or "e" or "i" or "o" or"u" or"A" or "E" or "I" or "O" or "U"):
#         print(i)
# else: print(0)

# from sklearn.utils import resample
# from zmq import SWAP



# // input for salesRecord
# salesRecord = []
# salesRecord_rows, salesRecord_cols = map(int, input().split())
# for idx in range(salesRecord_rows):
#     salesRecord.append(list(map(int, input().split())))
# print(salesRecord)
# res = []
# for i in range(len(salesRecord)):
#         op = list(map(sorted, salesRecord))
# for last in op:
#     res.append(last[-1])
# print(res)
# def finda():
#     n = []
#     s = input()
#     for i in range(len(s)-1):
#         for j in range(i):
#             if(s[i]==s[j]):
#                 n.append(s[i])
#     # print(n[::])
#     print(*n[::])
# finda()

# cook your dish here
# T = int(input())

# for i in range(T):
#     A,B,C = map(int,input().split())

#     l = [A,B,C]
#     ab = min(A,B)
#     bc = min(B,C)
#     ca = min(C,A)

#     li = [ab,bc,ca]

#     for j in range(3):
#         if():
#             print("Yes")
#         else:
#             print("No")

# ---------------------------------------------------------------------

T = int(input())
for i in range(T):
    N = int(input())
    # li= []
    for j in range(N):
        S = bool(input())
        R = bool(input())
        c = 0
        for k in range(len(S)):
            if(S[k] == R[k]):
                pass
            else:
                c+=1
        if(c//2!=0):
            print(0)
        else :
            print(1)