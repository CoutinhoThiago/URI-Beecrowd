for i in range(int(input())):
  entrada, saida = input().split()
  
  t = 0 #transformacoes
  for i in range(len(entrada)):
    if(ord(saida[i])>=ord(entrada[i])):
      t = t + (ord(saida[i])-ord(entrada[i]))
    else:
      t = t + 26-ord(entrada[i]) + ord(saida[i])
  print (t)