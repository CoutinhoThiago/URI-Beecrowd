maior = 0
nomes = []
saida = []
r = int(input())
while(r>0):
  for i in range(r):
      nomes.append(input())
      if(len(nomes[i]) > maior):
        maior = len(nomes[i])

  for j in range(r):
    while(len(nomes[j]) < maior):
      if(len(nomes[j]) < maior):
        nomes[j] = " " + str(nomes[j])
    saida.append(nomes[j])

  r = int(input())
  if(r>0): 
    saida.append("")
  maior = 0
  nomes = []

for l in range(len(saida)):
  print (saida[l])