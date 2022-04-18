def mdc(a, b):
    resto = None
    while resto != 0:
        resto = a % b
        a = b
        b = resto
    return a

for i in range(int(input())):
    numeros = [int(num) for num in input().strip().split(' ')]
    print(mdc(numeros[0], numeros[1]))