void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int m=A.size();
    int n=A[0].size();
 
    int r[m],c[n];
 
    for(int i=0;i<m;i++)
        r[i]=0;
    for(int i=0;i<n;i++)
        c[i]=0;
 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==0)
            {
                r[i]=1;
                c[j]=1;
            }
        }
    }
 
    for(int i=0;i<m;i++)
    {
        if(r[i]==1)
        {
            for(int j=0;j<n;j++)
                A[i][j]=0;
        }
    }
    for(int j=0;j<n;j++)
    {
        if(c[j]==1)
        {
            for(int i=0;i<m;i++)
                A[i][j]=0;
        }
    }
}