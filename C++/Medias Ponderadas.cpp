#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
int x;
 cin >>x;

double a;
double b;
double c;

int i;
for (i=0;i<x;i++)
{
    cin >>a;
    cin >>b;
    cin >>c;
    
    cout <<fixed<<setprecision(1);
    cout <<(a*2+b*3+c*5)/10<<endl;
}
 
    return 0;
}