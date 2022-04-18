#include <iostream>
 
using namespace std;
 
int main()
{
 
    int I;
     I=1;
    int J;
     J=8;
     
    int cont;
     cont=0; //cntador
    
    int i;
    for(i=0;i<15;i++)
    {
        cont++;

        J=J-1;
        
        cout <<"I="<<I<<" "<<"J="<<J<<endl;
        
        if (cont==3)
        {
            cont=0;
            
            I=I+2;

            J=J+5;
        }
    }
 
    return 0;
}