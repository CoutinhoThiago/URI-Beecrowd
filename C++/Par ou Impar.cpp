#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {
 
  int max;
   cin >>max;
  
  int x;
   
  int i;
  for (i=0;i<max;i++)
  {
      cin >>x;
      
      if (x==0)
      {
         cout <<"NULL"<<endl; 
      }

      else if (x%2==1)
      {
              cout <<"ODD POSITIVE"<<endl;
      }
      else if (x%2==-1)
      {
              cout <<"ODD NEGATIVE"<<endl; 
      }
      else if (x%2==0)
      {
          if (x>0)
          {
              cout <<"EVEN POSITIVE"<<endl;
          }
          else if (x<0)
          {
              cout <<"EVEN NEGATIVE"<<endl; 
          }
      }
  }
    return 0;
}