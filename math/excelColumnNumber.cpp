int Solution::titleToNumber(string A)
{
    int n=A.length();
    int ans=0;

    for(int i=0;i<n;i++)
    {
        ans = (ans*26) + (A[i]-'A'+1);
    }

    return ans;
}