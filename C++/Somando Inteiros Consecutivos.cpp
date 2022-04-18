#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
int a;
 cin >>a;
 
int n;
int i;
for (i=1;1>0;i++)
{
    cin >>n;
    if (n>0)
    {
        break;
    }
    
}

int j;
int resp;
 resp=0;
int aux;
 aux=0;
for (j=0;j<n;j++)
{
    aux=aux+a+j;
}

resp=aux;
cout <<resp<<endl;

 
    return 0;
}