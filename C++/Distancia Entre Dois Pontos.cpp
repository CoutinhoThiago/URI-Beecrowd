#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
 double x1, y1;
  cin >>x1>>y1;
 
 double x2, y2;
  cin >>x2>>y2;
  
 double resp1, resp2;
 resp1=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 resp2=sqrt(resp1);
    
 cout <<fixed<<setprecision(4);
 cout <<resp2<<endl;
    return 0;
}