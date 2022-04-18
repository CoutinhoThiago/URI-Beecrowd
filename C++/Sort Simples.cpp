#include <iostream>
 
using namespace std;
 
int main() {
 
 int x;
  cin >>x; 
 int y;
  cin >>y; 
 int z;
  cin >>z;
  
 if (x>y && x>z)
  {
      if (y>z)
       {
           cout <<z<<endl;
           cout <<y<<endl;
           cout <<x<<endl;
       }
      else if (y<z)
       {
           cout <<y<<endl;
           cout <<z<<endl;
           cout <<x<<endl;
       }
  }
  
 else if (y>x && y>z)
  {
            if (x>z)
       {
           cout <<z<<endl;
           cout <<x<<endl;
           cout <<y<<endl;
       }
      else if (x<z)
       {
           cout <<x<<endl;
           cout <<z<<endl;
           cout <<y<<endl;
       }
  }  
  
 else if (z>x && z>y)
  {
      if (x>y)
       {
           cout <<y<<endl;
           cout <<x<<endl;
           cout <<z<<endl;
       }
      else if (x<y)
       {
           cout <<x<<endl;
           cout <<y<<endl;
           cout <<z<<endl;
       }
  }
  
  
 cout <<endl;
  
 cout <<x<<endl;
 cout <<y<<endl;
 cout <<z<<endl;
 
    return 0;
}