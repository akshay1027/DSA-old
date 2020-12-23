int Solution::repeatedNumber(const vector<int> &A) {

    // solved using math logic, o(n) solution:
    // sum of given numbers
    // sum of n numbers 
    // if we subtract both, we get duplicate number.  
    long long int n= A.size();
    long long int sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    
    long long int sumOfN = ((n-1)*(n))/2;
    
    long long int ans= sum-sumOfN;
    
    return ans;
}