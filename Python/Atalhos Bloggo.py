while True:
  try: 
    entrada = str(input())
    
    a = 1
    b = 1

    for i in range(len(entrada)):
      if (entrada[i] == "_"):
        if (a == 1):
          print ("<i>", end = "")
          a = 2
        elif (a == 2):
          print ("</i>", end = "")
          a = 1
      elif (entrada[i] == "*"):
        if (b == 1):
          print ("<b>", end = "")
          b = 2
        elif (b == 2):
          print ("</b>", end = "")
          b = 1
      else:
        print(entrada[i], end = "")
    print("")
      

  except EOFError:
    break