#include <iostream>
#include <iomanip>
#include <vector>
 
 
using namespace std;
 
int main() {
 
    int n;
     std::cin >>n;
     
    
    int x;
    int y;

    int resp;
    int para;

    int i;
    int j;
    for (i=0;i<n;i++)
    {
      std::cin >>x;
      std::cin >>y;

      resp=0;
      para=y*2;

      for (j=0;j<para;j++)
      {
        if (x%2==1 || x%2==-1)
        {
          resp=(resp+x);

          //cout <<x<<endl;
        }
        x++;
      }

      std::cout <<resp<<endl;
    }
 
    return 0;
}