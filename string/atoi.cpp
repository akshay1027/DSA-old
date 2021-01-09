int Solution::atoi(const string A)
{
    int n = A.length();
    int i=0, neg=0;
 
    while(i<n && A[i]==' ') // check empty string , " 55"
        i++;
    if(i<n && A[i]=='-')  //check negatve sign, "-55"
    {
        neg=1;
        i++;
    }
    if(i<n && A[i]=='+') //check positive sign, "+55"
        i++;
 
    long long int res=0;
 
    while(i<n)
    {
        if(!isdigit(A[i]))  // check if not a number
            break;
            
        // else
        {
        res = res*10 + (A[i]-'0'); 
        
        // check for overflow or underflow
        
        if(neg==0 && res>=INT_MAX)
            return INT_MAX;
        if(neg==1 && (-1*res)<=INT_MIN)
            return INT_MIN;
        i++;
        }
    }
 
    if(neg) // if negative sign
        res*=-1; 
    return (int)res; //return int value to avoid overflow
}
