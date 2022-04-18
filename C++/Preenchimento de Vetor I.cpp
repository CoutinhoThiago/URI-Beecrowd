#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {

   int n;
    cin >>n;
 
   int v[10];
    v[0]=n;
   
   int i;
   for (i=1;i<10;i++)
   {
       v[i]=(v[i-1]*2);
   }
   
   for (i=0;i<10;i++)
   {
       cout <<"N["<<i<<"] = "<<v[i]<<endl;
   }
 
    return 0;
}