int Solution::lengthOfLastWord(const string s) {
    
    int n = s.length(),index = 0,flag=1;
    
    // eg: "hello world"
 
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ' && flag==1)  
        {
            index = i;  // index stores every words first index , eg: 0 | "h" , 6 | "w"
            flag=0;  // to make it stores only first word's index
        }
        if(s[i]==' ') // to find out last letter of each word
            flag=1;
    }
 
    while(n>0 && s[n-1]==' ') // to check if its a single word/letter and edge test cases.
    {
        n--;
    }
 
    if(index>=n)  // if its single letter, word etc
        return 0;
    else
        return (n-index); 
    
}

