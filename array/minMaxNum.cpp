#include<bits/stdc++.h>
using namespace std;

struct mm
{
    int max;
    int min;
};

struct mm minmax(int a[],int n)
{
    struct mm ans;

    if(n==1)
    {
        ans.max=a[0];
        ans.min=a[0];
    }

    else if(n==2)
    {
        if(a[0]>a[1])
        {
            ans.max=a[0];
            ans.min=a[1];
        }

        else if(a[0]<a[1])
        {
            ans.max=a[1];
            ans.min=a[0];
        }
        else 
        {
            ans.max=a[0];
            ans.min=a[0];
        }
    }

    else{
        
        ans.max=a[0];
        ans.min=a[0];
        for(int i=2;i<n;i++)
        {
            if(a[i]>ans.max)
            {
                ans.max=a[i];
            }
            else if(a[i]<ans.min)
            {
                ans.min=a[i];
            }
        }
    }

    return ans;
}

int main()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    struct mm result= minmax(a,n);

    cout<<result.max<<" # "<<result.min<<endl;

    return 0;
}