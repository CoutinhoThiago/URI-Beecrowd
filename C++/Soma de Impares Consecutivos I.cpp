#include <iostream>
#include <iomanip>


using namespace std;
 
int main() {
 
 int x;
  cin >>x;
 int y;
  cin >>y;

 int aux;
  aux=0;
 if (x>y)
 {
   aux=x;
   x=y;
   y=aux;
 }

 int r;
  r=0;
 
 
 if (x%2==0)
 {
     r=0;
    int i;
    for (i=x;i<y-1;i++) 
    {
        i++;
        r=r+i;
    }
 } 
 
 else if (x%2==1 || x%2==-1)
 {
     r=0;
    int i;
    for (i=x+1;i<y-1;i++) 
    {
        i++;
        r=r+i;
    }
 }

 cout <<r<<endl;

 
    return 0;
}