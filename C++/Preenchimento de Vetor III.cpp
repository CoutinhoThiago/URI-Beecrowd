#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {
 
    double x;
     cin >>x;
     
    double n[100];
    n[0]=x;
    
    int i;
    for (i=0;i<100;i++)
    {
       if (n[i]>0.0000)
       {
          cout <<"N["<<i<<"] = ";
        
          cout <<fixed<<setprecision(4);
          cout <<n[i]<<endl;
        
          n[i+1]=(n[i]/2);
       }
       else 
       {
          cout <<"N["<<i<<"] = "<<0.0000<<endl;
       }
    }
     
 
    return 0;
}