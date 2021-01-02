vector<int> Solution::subUnsort(vector<int> &A)
{
    int n=A.size();
    int st=0,end=n-1;
    int flags=0;
 
    for(int i=1;i<n;i++)
    {
        if(A[i]<A[i-1])
        {
            int j=st;
            while(j>=0 && A[j]>A[i])
                j--;
            if(j<st)
                st=j+1;
            // cout<<st<<" ";
            flags=1;
        }
        if(flags==0)
            st=i;
    }
 
    int flage=0;
 
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]>A[i+1])
        {
            int j=end;
            while(j<n && A[j]<A[i])
                j++;
            if(j>end)
                end=j-1;
            // cout<<end<<" ";
            flage=1;
        }
        if(flage==0)
            end=i;
    }
 
    vector<int> v;
 
    if(flags==0 || flage==0)
    {
        v.push_back(-1);
        return v;
    }
 
    v.push_back(st);
    v.push_back(end);
    return v;
}