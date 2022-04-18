#include <iostream>
#include <iomanip>
#include <vector>
#include <stdio.h>
 
 
using namespace std;
 
int main() {

    int vp[5];
    int vi[5];

    int p;
     p=0;
    int im;
     im=0;

    int a;
    int b;
 
    int vint[15];
    int i;
    for (i=0;i<15;i++)
    {
      cin >>vint[i];

      if (vint[i]%2==0)
      {
         vp[p]=vint[i];

         p++;
      }
      if (vint[i]%2==1 || vint[i]%2==-1)
      {
         vi[im]=vint[i];

         im++;
      }

      if (im>=5)
      {
        for (a=0;a<5;a++)
        {
           cout <<"impar["<<a<<"] = "<<vi[a]<<endl;
        }

        im=0;

      }
      if (p>=5)
      {
        for (b=0;b<5;b++)
        {
           cout <<"par["<<b<<"] = "<<vp[b]<<endl;
        }

        p=0;
      }
    }

    int k;
    for (k=0;k<im;k++)
    {
        cout <<"impar["<<k<<"] = "<<vi[k]<<endl;
    }

    int j;
    for (j=0;j<p;j++)
    {
        cout <<"par["<<j<<"] = "<<vp[j]<<endl;
    }
    

 
    return 0;
}