for i in range(int(input())):

  letras = 0 
  alfabeto = 'abcdefghijklmnopqrstuvwxyz'
  frase = str(input())
  for j in range(len(frase)):
    for k in range(len(alfabeto)):
      if (frase[j] == alfabeto[k]):
        letras = letras + 1
        alfabeto = alfabeto.replace(alfabeto[k], "")
        break
        
  if (letras == 26):
    print ("frase completa") 
  elif (letras >= 13) and (letras <=25):
    print ("frase quase completa")
  else:
    print ("frase mal elaborada") 