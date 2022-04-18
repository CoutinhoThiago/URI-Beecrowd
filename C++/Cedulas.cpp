#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
int x;
 cin >>x;
 
 
 
cout <<x<<endl;

cout <<x/100<<" nota(s) de R$ 100,00"<<endl;

int a;
a=(x%100);
cout <<a/50<<" nota(s) de R$ 50,00"<<endl;

int b;
b=(a%50);
cout <<b/20<<" nota(s) de R$ 20,00"<<endl;

int c;
c=(b%20);
cout <<c/10<<" nota(s) de R$ 10,00"<<endl;

int d;
d=(c%10);
cout <<d/5<<" nota(s) de R$ 5,00"<<endl;

int e;
e=(d%5);
cout <<e/2<<" nota(s) de R$ 2,00"<<endl;

int f;
f=(e%2);
cout <<f<<" nota(s) de R$ 1,00"<<endl;

    return 0;
} 