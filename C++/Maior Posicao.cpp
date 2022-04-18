#include <iostream>
#include <vector>
#include <iomanip>
 
using namespace std;


int main() {

    int maior;
     maior=0;
    int posi;
     posi=0;

    int v[100];

    int i;
    for (i=0;i<100;i++)
    {
        cin >>v[i];
    }

    maior=v[0];
    posi=1;

    int j;
    for (j=0;j<99;j++)
    {
        if (v[j]>maior)
        {
            maior=v[j];
            posi=j+1;
        }
        else if (v[j+1]>maior)
        {
            maior=v[j+1];
            posi=j+2;
        }
    }

    cout <<maior<<endl;
    cout <<posi<<endl;
    
 
    return 0;
}