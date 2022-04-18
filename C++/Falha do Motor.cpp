#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;
     std:: cin >>n;

    int v[n];

    std::cin>>v[0];

    int i;
    for (i=1;i<n;i++)
    {
      std::cin>>v[i];

      if (v[i-1]>v[i])
      {
        std::cout <<i+1<<endl;

        break;
      }
    }

    if (i==n)
    {
      std::cout<<0<<endl;
    }
    
    return 0;
}