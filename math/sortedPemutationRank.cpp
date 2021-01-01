//number theory based

typedef long long int ll;
#define MOD 1000003
 
ll fact(ll n)
{
    if(n<=1)
        return 1;
    else
        return (n%MOD * fact(n-1)%MOD)%MOD;
}
 
 
int Solution::findRank(string A)
{
    ll n = A.length();
    ll mul = fact(n);
 
    ll rank = 0;
 
    for(int i=0;i<n;i++)
    {
        mul /= (n-i);
 
        ll cnt=0;
 
        for(int j=i+1;j<n;j++)
            if(A[i]>A[j])
                cnt++;
 
        rank +=(cnt*fact(n-i-1))%MOD;
    }
 
    return (rank+1)%MOD;
}
