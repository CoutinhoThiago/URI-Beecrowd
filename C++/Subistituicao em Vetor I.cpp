#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {
 
   int v[10];
   
   int i;
   for (i=0;i<10;i++)
   {
       cin >>v[i];
       
       if (v[i]<=0)
       {
           v[i]=1;
       }
   }
   
   for (i=0;i<10;i++)
   {
       cout <<"X["<<i<<"] = "<<v[i]<<endl;
   }
 
    return 0;
}