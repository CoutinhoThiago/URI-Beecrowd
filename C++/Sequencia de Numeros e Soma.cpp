#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() 
{
    int i;
    int j;
    
    int a;
    int b;
    int aux;
    
    int soma;
     soma=0;

    for (i=0;i<i+1;i++)
    {
        soma=0;
        cin >>a;
        cin >>b;

        if (a==0 || b==0 || a<0 || b<0)
        {
            break;
        }

        if (a>b)
        {
          aux=a;
          a=b;
          b=aux;
        }
        
        for (j=a;j<=b;j++)
        {
            cout <<j<<" ";

            soma=soma+j;
        }
        cout <<"Sum="<<soma<<endl;
    } 
    return 0;
}