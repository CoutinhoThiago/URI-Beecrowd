for i in range(int(input())):
  entrada = input().split()
  a = entrada[0]
  b = entrada[1]

  if (a == "tesoura"): 
    if (b == "papel") or (b == "lagarto"): 
      print ("rajesh")
    elif (b == "tesoura"):
      print("empate")
    else:
      print("sheldon")

  if (a == "papel"): 
    if (b == "pedra") or (b == "Spock"): 
      print ("rajesh")
    elif (b == "papel"):
      print("empate")
    else:
      print("sheldon")

  if (a == "pedra"): 
    if (b == "lagarto") or (b == "tesoura"): 
      print ("rajesh")
    elif (b == "pedra"):
      print("empate")
    else:
      print("sheldon")

  if (a == "lagarto"): 
    if (b == "spock") or (b == "papel"): 
      print ("rajesh")
    elif (b == "lagarto"):
      print("empate")
    else:
      print("sheldon")

  if (a == "spock"): 
      if (b == "tesoura") or (b == "pedra"): 
        print ("rajesh")
      elif (b == "spock"):
        print("empate")
      else:
        print("sheldon")