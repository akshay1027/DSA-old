vector<vector<int> > Solution::solve(int A) {
     vector<vector<int>> v;
    
    for(int i=0;i<A;i++)
    {
        vector<int> vv;
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                vv.push_back(1);
            else
                vv.push_back(v[i-1][j] + v[i-1][j-1]);
        }
        v.push_back(vv);
    }
    return v;
}
