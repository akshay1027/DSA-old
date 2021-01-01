   int Solution::isPalindrome(int A)
{
    if(A<0)
        return 0;
 
    int Ac = A, s=0;
    while(A)
    {
        s = s*10 + (A%10);  //formula based answer
        A/=10;
    }
    if(s==Ac)
        return 1;
    else
        return 0;
}

int Solution::isPalindrome(int A)
{
   string s1= to_string(A);
   string s2="";
   for(int i=s1.size()-1;i>=0;i--)
    {
       s2 +=s1[i];    // using o(n) extra space
    } 
    if(s1==s2) return 1;

    else return 0;
}