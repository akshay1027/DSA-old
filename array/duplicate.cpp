#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,count=0;
    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    cout<<"enter the element to find its frequency";
    cin>>x;
    cout<<"enter the elemnts";
    for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(int i=0;i<n;i++)
   {
       if(a[i]==x)
       {
           count++;
       }
   }

   cout<<"frequency of given element is ="<<count<<endl;
  
  return 0;

}