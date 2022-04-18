#include <iostream>
#include <iomanip>
#include <vector>

 
using namespace std;
 
int main() {
    
    int x;
    int y;
    
    int reset;
    
    int inter;
     inter=0;
    int gremio;
     gremio=0;
    int empates;
     empates=0;
 
int i;

for (i=1;i>0;i++)
{
    cin >>x;
    cin >>y;

    if (x>y)
    {
       inter++;
    }
    else if (x<y)
    {
       gremio++;
    }
    else if (x==y)
    {
       empates++;
    }
    
    cout <<"Novo grenal (1-sim 2-nao)"<<endl;
    cin >>reset;
    
    if (reset==2)
    {
        break;
    }
}
 
cout <<i<<" grenais"<<endl;
cout <<"Inter:"<<inter<<endl;
cout <<"Gremio:"<<gremio<<endl;
cout <<"Empates:"<<empates<<endl;

if (inter>gremio)
{
  cout <<"Inter venceu mais"<<endl;
}

else if (inter<gremio)
{
  cout <<"Gremio venceu mais"<<endl;
}

else 
{
  cout <<"Nao houve vencedor"<<endl;
}

 
    return 0;
}