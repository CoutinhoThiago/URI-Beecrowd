#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
 
    int a;
    int ax;
    double av;
    cin >>a>>ax>>av;
    
    int b;
    int bx;
    double bv;
    cin >>b>>bx>>bv;
    
    double resp;
    resp=(ax*av)+(bx*bv);
    
    cout <<fixed<<setprecision(2);
    cout <<"VALOR A PAGAR: R$ "<<resp<<endl;
    
    return 0;
}