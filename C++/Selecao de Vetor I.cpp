#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {

   double v[100];
   
   int i;
   for (i=0;i<100;i++)
   {
       cin >>v[i];
   }
   
   for (i=0;i<100;i++)
   {
       if (v[i]<=10)
       {

         cout <<fixed<<setprecision(1);
         cout <<"A["<<i<<"] = "<<v[i]<<endl;
       }
   }
 
    return 0;
}