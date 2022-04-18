#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;
     std:: cin >>n;

    int v[n];

    std::cin>>v[0];

    int maior;
     maior=v[0];

    int posicao;
     posicao=0;

    int i;
    for (i=1;i<n;i++)
    {
      std::cin>>v[i];
    }

    int j;
    for (j=0;j<n-1;j++)
    
      if (v[j]<maior)
      {
        maior=v[j];
        posicao=j;
      }

    std::cout<<"Menor valor: "<<maior<<endl;
    std::cout<<"Posicao: "<<posicao<<endl;
    
    return 0;
}
