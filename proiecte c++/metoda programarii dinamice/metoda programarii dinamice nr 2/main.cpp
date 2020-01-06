// Rezolvarea problemei nr.2 de la programare dinamica
#include <iostream>

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
    int n, *v,i,s,x,nr;

    cout<<"Suma de bani=";
    cin>>s;
    cout<<endl;
    cout<<"n=";
    cin>>n;
    v=new int[n];
    for(i=1; i<=n; i++)
        cin>>v[i];
    sortare(n,v);
    nr=0;
     for(i=n; i>=1&s>0 ;i--)
     {

        x=s/v[i];
        nr=nr+x;
        s=s-v[i]*x;

     }
     cout<<"nr="<<nr;


}
