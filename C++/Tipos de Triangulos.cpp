#include <iostream>
#include <iomanip>


using namespace std;
 
int main() 
{
  double x;
   cin >>x;
  double y;
   cin >>y;
  double z;
   cin >>z;
  double a;
  double b;
  double c;

  if (x>=y && x>=z)
  {
      a=x;
      b=y;
      c=z;
  }
  else if (y>=x && y>=z)
  { 
      a=y;
      b=x;
      c=z; 
  }
  else if (z>=x && z>=y)
  {
      a=z;
      b=x;
      c=y;
  }


    

   if (a>=(b+c))
     {
         cout <<"NAO FORMA TRIANGULO"<<endl; 
     }
     
     else if ((a*a)==(b*b)+(c*c))
     {
         cout <<"TRIANGULO RETANGULO"<<endl;
     }

     else if ((a*a)<(b*b)+(c*c))
     {
         cout <<"TRIANGULO ACUTANGULO"<<endl;

     }
     else if ((a*a)>(b*b)+(c*c))
     {
         cout <<"TRIANGULO OBTUSANGULO"<<endl;
     }
     
     
     
     if (x==y && x==z && y==z)
         {
             cout <<"TRIANGULO EQUILATERO"<<endl;
         }

          else if (x==y && x!=z && y!=z)
         {
             cout <<"TRIANGULO ISOSCELES"<<endl;
         }
         else if (x==z && x!=y && z!=y)
         {
             cout <<"TRIANGULO ISOSCELES"<<endl;
         }
         else if (y==z && y!=x && z!=x)
         {
             cout <<"TRIANGULO ISOSCELES"<<endl;
         }
  
     
    return 0;
}