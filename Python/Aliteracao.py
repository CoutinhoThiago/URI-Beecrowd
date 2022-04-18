while True:
  try: 
    entrada = input()
    entrada = entrada.lower()
    lista = []
    lista = entrada.split()

    repete = "*"

    aliteracao = 0

    for i in range (len(lista)-1):
      if (lista[i][0] == lista[i+1][0]) and (repete != lista[i][0]):
        aliteracao = aliteracao +1
        repete = lista[i+1][0]
      elif (lista[i][0] != lista[i+1][0]):
        repete = "*"

    print(aliteracao)

  except EOFError:
    break