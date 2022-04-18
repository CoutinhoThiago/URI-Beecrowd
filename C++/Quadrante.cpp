#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
int x;
int y;
 
int i;
for (i=1;i>0;i++)
{
    cin >>x;
    cin >>y;

    if (x==0 || y==0)
    {
      return 0;
    }
    
    else if (x>0)
    {
        if (y>0)
        {
           cout <<"primeiro"<<endl;
        }
        else if (y<0)
        {
           cout <<"quarto"<<endl;
        }
    }    
    else if (x<0)
    {
        if (y>0)
        {
           cout <<"segundo"<<endl;
        }
        else if (y<0)
        {
          cout <<"terceiro"<<endl;
        } 
    }
}
 
    return 0;
}