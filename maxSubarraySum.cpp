#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int current_sum = a[0];
    int maximum_sum = a[0];

    for(int i=1;i<n;i++)
    {
        current_sum = max(a[i], current_sum+a[i]);
        maximum_sum = max(current_sum, maximum_sum);
    }

    cout<<" max subarray sum = "<<maximum_sum<<endl;
    return 0;
}