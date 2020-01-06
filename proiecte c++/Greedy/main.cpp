// Rezolvarea problemii nr.4

#include <iostream>
#include<fstream>
using namespace std;

 void sortare(int n, int v[50])
  { int i,sw,aux;
   do
   {
       sw=1;
       for(i=1;i<=n-1;i++)
        if(v[i]>v[i+1])
       {
           sw=0;
           aux=v[i];
           v[i]=v[i+1];
           v[i+1]=aux;
       }

   }while(sw!=1);
  }



int main()
{
   int n,m,c[50],poz,neg,a[50],b[50],x,j,i,s;
   ifstream f("multimi.txt");
   f>>n;
   f>>m;
   for(i=1;i<=n;i++)
   {
       f>>x;
       a[i]=x;
   }
   for(i=1;i<=m;i++)
   {
       f>>x;
       b[i]=x;
   }
  sortare(n,a);
  sortare(m,b);
  poz=0;
  neg=0;
  for(i=1;i<=n;i++)
  {
      if (a[i]>0)
        poz++;
      else
        if(a[i]<=0)
        neg++;
  }

  for(i=1;i<=neg;i++)
    c[i]=b[i];
  j=neg;
  for(i=m;i>=m-(n-neg)+1;i--)
        {
            j++;
            c[j]=b[i];
        }
  sortare(j,c);
  s=0;
  for(i=1;i<=n;i++)
    s=s+a[i]*c[i];
  cout<<"s="<<s;
  cout<<endl;
  for(i=1;i<=n;i++)
    cout<<c[i]<<" ";

}
