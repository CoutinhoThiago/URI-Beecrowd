for i in range(int(input())):
  n = int(input())
  linguas = []
  varia = 1
  for j in range(n):
    linguas.append(input())
    if(linguas[j-1] != linguas[j]):
      varia = 2

  if(varia != 1):
    print("ingles")
  else:
    print(linguas[0])