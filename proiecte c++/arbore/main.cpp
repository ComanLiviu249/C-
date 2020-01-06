#include <iostream>

using namespace std;
int n,v[100],i,s,m,x,poz;
int main()
{
     cout << "n=";cin>>n;
     for(i=1;i<=n;i++)
{
   cout << "v["<<i<<"]=";
   cin>>v[i];
}
cout<<"x=";cin>>x;
i=l;s=n;
while(i<=s)
{
  m= (i+s)/2;
  if(x==v[m])
{
   cout<<x<<" se afla pe poz: "<<m;
   break;
}
else
   if (v[m]<x)
   i=m+1;
  else
   s=m-1;
}
if(i>s)
    cout<<"elementul cautat nu se afla in vector";
return 0;
}
