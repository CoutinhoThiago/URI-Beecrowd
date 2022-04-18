c = int(input())
for i in range(c):
    saida = ""
    reverse = ""
    a, b = map(int, input().split())
    while a <= b:
        saida += str(a)
        a += 1

    reverse = saida + saida[::-1]
    print(reverse)


for i in range(int(input())):
    saida = ""
    reverse = ""
    comeco, fim = map(int, input().split())
    while comeco <= fim:
        saida += str(comeco)
        comeco += 1

    reverse = saida + saida[::-1]
    print(reverse)