quantidade = input()
quantidade = int(quantidade)

lista = []
lista = input().split()

for j in range(quantidade):
  if(len(lista[j]) == 3):
    if (lista[j][0] == 'U') and (lista[j][0+1] == 'R'):
      lista[j] = "URI"
    elif (lista[j][0] == "O") and (lista[j][0+1] == "B"):
      lista[j] = "OBI"
  
separador = ' '
saida = separador.join(map(str, lista))
print (saida)