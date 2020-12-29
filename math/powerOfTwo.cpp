// power of two integers.

int Solution::isPower(int A)
{
    if(A==1)
    return 1;
    
    for(int i=2;i<=sqrt(A);i++)
    {
        long long int num=1;

        while(true)
        {
            num=num*i; // eg: 2*2*2*2.. until num==A
            if(num==A)
            return 1;

            else if(num>A)
            break;
        }
    }

    return 0;
}