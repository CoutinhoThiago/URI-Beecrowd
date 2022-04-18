#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
 double sal;
  cin >>sal;
  
 double nsal;
 double rsal;
 
 
 if (sal>=0 && sal<=400)
  {
            nsal=sal+(sal/10)+(sal/20);
            rsal=(sal/10)+(sal/20);
      
            cout <<fixed<<setprecision(2);
            cout <<"Novo salario: "<<nsal<<endl;
  
            cout <<fixed<<setprecision(2);
            cout <<"Reajuste ganho: "<<rsal<<endl;
  
            cout <<"Em percentual: 15 %"<<endl;
      
  }
   
 else if (sal>400 && sal<=800)
  {
            nsal=sal+(sal/10)+(sal/50);
            rsal=(sal/10)+(sal/50);
      
            cout <<fixed<<setprecision(2);
            cout <<"Novo salario: "<<nsal<<endl;
  
            cout <<fixed<<setprecision(2);
            cout <<"Reajuste ganho: "<<rsal<<endl;
  
            cout <<"Em percentual: 12 %"<<endl;
  }
   
 else if (sal>800 && sal<=1200)
  {
            nsal=sal+(sal/10);
            rsal=(sal/10);
      
            cout <<fixed<<setprecision(2);
            cout <<"Novo salario: "<<nsal<<endl;
  
            cout <<fixed<<setprecision(2);
            cout <<"Reajuste ganho: "<<rsal<<endl;
  
            cout <<"Em percentual: 10 %"<<endl;
  }
   
 else if (sal>1200 && sal<=2000)
  {
      
            nsal=sal+(sal/20)+(sal/50);
            rsal=(sal/20)+(sal/50);
      
            cout <<fixed<<setprecision(2);
            cout <<"Novo salario: "<<nsal<<endl;
  
            cout <<fixed<<setprecision(2);
            cout <<"Reajuste ganho: "<<rsal<<endl;
  
            cout <<"Em percentual: 7 %"<<endl;

  }
   
 else if (sal>2000)
  {
            nsal=sal+(sal/50)+(sal/50);
            rsal=(sal/50)+(sal/50);
      
            cout <<fixed<<setprecision(2);
            cout <<"Novo salario: "<<nsal<<endl;
  
            cout <<fixed<<setprecision(2);
            cout <<"Reajuste ganho: "<<rsal<<endl;
  
            cout <<"Em percentual: 4 %"<<endl;
  }
 
    return 0;
}