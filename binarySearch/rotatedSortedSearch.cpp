int b_search(const vector<int> &v, int  l, int h, int x)
{
    if(l>h)
        return -1;
 
    int mid = l + (h-l)/2;
 
    if(v[mid] == x)
        return mid;
 
    if(v[l] <= v[mid])
    {
        if(x >= v[l] && x <= v[mid])
            return b_search(v, l, mid-1, x);
        return b_search(v, mid+1, h, x);
    }
 
    if(x >= v[mid] && x <= v[h])
        return b_search(v, mid+1, h, x);
    return b_search(v, l, mid-1, x);
}
 
int Solution::search(const vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    return b_search(A,0,A.size()-1,B);
}