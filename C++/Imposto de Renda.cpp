#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
 
 double x;
  cin >>x;
 
 double i;
  i=0;
  
 if (x>=0 && x<=2000.00)
  {
     cout <<"Isento"<<endl;
  }

else if (x>=2000.01 && x<=3000)
 {
     i=(x-2000)/20+(x-2000)/50+(x-2000)/100;

     cout <<fixed<<setprecision(2);
     cout <<"R$ "<<i<<endl;
 }

 else if (x>=3000.01 && x<=4500)
 {
     i=80+(x-3000)/10+(x-3000)/20+(x-3000)/50+(x-3000)/100;

     cout <<fixed<<setprecision(2);
     cout <<"R$ "<<i<<endl;
 }
 
 else if (x>=4500.01)
 {
     i=80+270+(x-4500)/4+(x-4500)/50+(x-4500)/100;

     cout <<fixed<<setprecision(2);
     cout <<"R$ "<<i<<endl;
 }
  
 

    return 0;
}