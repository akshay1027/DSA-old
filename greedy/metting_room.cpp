int Solution::solve(vector<vector<int> > &a) {
    vector<int>v1;
    vector<int>v2;
    int ans,i,n=a.size();
    for(i=0;i<n;i++)
    {
        v1.push_back(a[i][0]); // all starting time
        v2.push_back(a[i][1]); // all ending time
    }

    // sorting all starting and ending time

    sort(v1.begin(),v1.end());  
    sort(v2.begin(),v2.end());

    ans=0;
    int k=0,j=0;
    for(i=0;i<n;i++)
    {
       if(v1[k]<v2[j])     // check if starting time is less than or equal to ending time
      {
                ans++; // increase room by 1
                k++; // move to next start
      }
      else
     {
      k++; // if starting time is more than ending time
      j++; // move both start and end. 
      
     // NOTE: increase meeting when start < end and not when start > end;
     }
    }
    return ans;
}
