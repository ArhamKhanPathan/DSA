from symtable import Symbol


n = input()

for i in range(len(n)):
    c = 0
    if (n == "!" or n == "@" or n == "#" or n == "$" or n == "%" or n == "^" or n == "&" or n == "*" or n == ")" or n == "("  or n == "_" or n == "+" or n == "=" or n == "-" or n == "`" or n== "~" or n == " " ):
        c+=1

    print(c)