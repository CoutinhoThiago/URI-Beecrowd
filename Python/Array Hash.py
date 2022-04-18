entradas = int(input());
for i in range(entradas):

  soma = 0

  linhas = int(input());
  for j in range(linhas):

    linha = str(input())
    tamanho = len(linha)

    matriz = []*j,[]*0

    k = 0 

    for k in range(tamanho):
      soma = soma + (ord(linha[k])-65) + j + k 

  print(soma)




  for i in range(int(input())):
  soma = 0
  for j in range(int(input())):
    linha = str(input())
    for k in range(len(linha)):
      soma = soma + (ord(linha[k])-65) + j + k 
  print(soma)