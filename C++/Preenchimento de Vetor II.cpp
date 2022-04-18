#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() 
{
 
    int t;
     std::cin>>t;

        int i;
        i=0;
        int j;
        for (j=0;j<1000;j++)
        {
          std::cout<<"N["<<j<<"] = "<<i<<endl;

          i++;

          if (i==t)
          {
            i=0;
          }
        }
    
 
    return 0;
}