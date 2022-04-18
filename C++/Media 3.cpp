#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double n1;
     cin >>n1; 
    double n2;
     cin >>n2; 
    double n3;
     cin >>n3; 
    double n4;
     cin >>n4; 
    
    double med1;
     med1=((2*n1)+(3*n2)+(4*n3)+n4)/10;
     
    cout <<fixed<<setprecision(1); 
    cout <<"Media: "<<med1<<endl;
    
    if (med1>7)
    {
        cout <<"Aluno aprovado."<<endl;
    }    
    
    else if (med1<5)
    {
        cout <<"Aluno reprovado."<<endl;
    }   
    
    else if (med1<7 && med1>=5)
    {
        cout <<"Aluno em exame."<<endl;
        
        double ex;
         cin >>ex;
        
        double med2;
         med2=(ex+med1)/2;
         
        cout <<fixed<<setprecision(1);
        cout <<"Nota do exame: "<<ex<<endl;
        
        if (med2>=5)
         {
                cout <<"Aluno aprovado."<<endl;
                cout <<fixed<<setprecision(1);
                cout <<"Media final: "<<med2<<endl;
          }    
    
         else if (med2<5)
          {
                cout <<"Aluno reprovado."<<endl;
                cout <<fixed<<setprecision(1);
                cout <<"Media final: "<<med2<<endl;
          }
        
    }
     
 
    return 0;
}
