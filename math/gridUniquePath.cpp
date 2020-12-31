int calc(long long int n,long long int r)
{
    if(n==r)
        return 1;
    long long  ans = 1;
    for(long long int i=0;i<r;i++)
        ans = (ans * (n-i) / (i+1));
    return int(ans);
}
 
int Solution::uniquePaths(int A, int B)
{
    return calc(A+B-2,B-1);
}