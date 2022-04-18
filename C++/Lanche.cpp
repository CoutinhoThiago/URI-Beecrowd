#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
    int code;
     cin >>code;
    int quant;
     cin >>quant;
     
    if (code==1)
     {
        cout <<fixed<<setprecision(2);
        cout <<"Total: R$ "<<4.00*quant<<endl;
     }     
    
    else if (code==2)
     {
         cout <<fixed<<setprecision(2);
         cout <<"Total: R$ "<<4.50*quant<<endl;
     }     
    
    else if (code==3)
     {
         cout <<fixed<<setprecision(2);
         cout <<"Total: R$ "<<5.00*quant<<endl;
     }     
    else if (code==4)
     {
         cout <<fixed<<setprecision(2);
         cout <<"Total: R$ "<<2.00*quant<<endl;
     }
          
    else if (code==5)
     {
         cout <<fixed<<setprecision(2);
         cout <<"Total: R$ "<<1.50*quant<<endl;
     }
 

 
    return 0;
}
