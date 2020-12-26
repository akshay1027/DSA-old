int Solution::pow(int x, int n, int d)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    if(x==0)
        return 0;
    if(n==0)
        return 1;
 
    long long int a = x%d;
    if(a<0)
        a+=d;
    long long int res = 1;
 
 
    while(n)
    {
        if(n&1)
            res = (res*a)%d;
        a = (a*a)%d;
        if(a<0)
            a+=d;
        n = n>>1;
    }
    return int(res);
}