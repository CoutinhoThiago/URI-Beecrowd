#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int x;
    int y;
     cin >>x;
     cin >>y;
     
    double resp;
     resp=(x*y);
     resp=resp/12;
     
    cout <<fixed<<setprecision(3);
    cout <<resp<<endl;
 
    return 0;
}
