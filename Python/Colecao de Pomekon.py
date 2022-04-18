tamanho = int(input())

lista = [""]*1
pokemons = 0

pokemon = input()
lista[0] = (pokemon)
cont = 1


for i  in range (tamanho-1):
  cont = 1
  pokemon = input()

  for j in range (len(lista)):
    if (lista[j] != pokemon):
      cont = cont + 1

  
  if (cont > len(lista)):
    lista.append(pokemon)

print("Falta(m) ", end ="") 
print (151 - (len(lista)), end ="")
print(" pomekon(s).")