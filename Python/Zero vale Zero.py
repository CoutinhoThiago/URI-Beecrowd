while True:
  try: 
    entrada = input().split()
    x = int(entrada[0])
    y = int(entrada[1])
     
    xy = str(x+y)

    x = str(x)
    y = str(y)
    if(x == "0")and (y == "0"):
      break

    tamanho = len(xy)
    resp = ""
    

    for i in range(tamanho):
      if(xy[i] != "0"):
        resp = resp + xy[i]
    
    print(resp)
    
  except EOFError:
    break