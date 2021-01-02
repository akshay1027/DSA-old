vector<int> Solution::plusOne(vector<int> &A) 
{
    int c=1;
    
    for(int i=A.size()-1;i>=0;i--)
    {
        int num = A[i]+c;
        c = num/10;
        A[i] = num%10;
    }
    
    vector<int> v;
    if(c==1)
    {
        v.push_back(1);
        for(int i=0;i<A.size();i++)
            v.push_back(A[i]);
    }
    else
    {
        int i=0;
        while(i<A.size())
        {
            if(A[i]==0)
                i++;
            else
                break;
        }
        for(;i<A.size();i++)
            v.push_back(A[i]);
    }
    return v;
}