// alternative for dutch national flag algotithm.

#include<bits/stdc++.h>
using namespace std;

int zeroOneTwo ( int n, vector<int> &a)
{
    int count0=0, count1=0, count2=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count0++;
        }

        else if(a[i]==1)
        {
            count1++;
        }

        else count2++;
    }

   
    while(count0>0)
    {
        cout<<"0";
        count0--;
    }
    while(count1>0)
    {
        cout<<"1";
        count1--;
    }
    while(count2>0)
    {
        cout<<"2";
        count2--;
    }
    cout<<endl;
    return 0;

}
int main()
{  
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    zeroOneTwo(n, a);

    cout<<endl;
    return 0;

}