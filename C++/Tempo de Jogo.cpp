#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
    int x;
     cin >>x;
    int y;
     cin >>y;
     
    if (x>y)
     {
         cout <<"O JOGO DUROU "<<24-x+y<<" HORA(S)"<<endl;
     }     
    else if (x<y)
     {
         cout <<"O JOGO DUROU "<<y-x<<" HORA(S)"<<endl;
     }     
    else 
     {
         cout <<"O JOGO DUROU 24 HORA(S)"<<endl;
     }

 
    return 0;
}