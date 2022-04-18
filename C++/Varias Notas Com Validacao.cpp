#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() 
{
    int reset;
     reset=1;
    int resp;

    double x;
    double y;

    int a;

    int i;
    int j;

    for (i=1;i>0;i++)
    {    
        do 
        {
              cin >>x;

              if (x<=10 && x>=0)
              {
                break;
              }
              else 
              {
                cout <<"nota invalida"<<endl;
              }
        }
        while(i>0);

        do
        { 
              cin >>y;

              if (y<=10 && y>=0)
              {
                break;
              }
              else 
              {
                cout <<"nota invalida"<<endl;
              }
        }
        while(i>0);


        cout <<fixed<<setprecision(2);
        cout <<"media = "<<(x+y)/2<<endl;
        
        
         while (resp!=2)
         {
          cout <<"novo calculo (1-sim 2-nao)"<<endl;
          cin >>a;
          resp=a;

          if (resp==1)
          {
            break;
          }
          else if (resp==2)
          {
            return 0;
          }
         }
    }
    

    



    return 0;
}