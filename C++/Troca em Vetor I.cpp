#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {

   int v[20];
   int v2[20];
   
   int i;
   for (i=0;i<20;i++)
   {
       cin >>v[i];
        v2[19-i]=v[i];
   }
   
   for (i=0;i<20;i++)
   {
         cout <<"N["<<i<<"] = "<<v2[i]<<endl;
   }
 
    return 0;
}