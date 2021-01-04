int countless(vector<int> &A,int n){
    int c = 0;
    for(auto x: A)if(x<n)c++;
    return c;
}

int Solution::solve(vector<int> &A, int B, int C) {
    if(A.size()==0)return 0;

    int answer = 0;
    int n = A.size();
    
    // storing digits of C in a vector
    vector<int> digits;
    while(C){
        digits.push_back(C%10);
        C/=10;
    }
    reverse(digits.begin(),digits.end());
    
    if(B>digits.size()){
        return 0;
    }else if(B<digits.size()){ 
        if(B==1)return A.size();
        if(A[0]==0)return pow(n,B) - pow(n,B-1);
        return pow(n,B);
    }
    else{
        for(int i=0;i<digits.size();i++){
            int less = countless(A,digits[i]);
            if(i==digits.size()-1){
                answer+=less;
            }
            else{
                if(i==0 && A[0]==0)less--;
                answer+=less*pow(n,B-i-1);
                if(find(A.begin(),A.end(),digits[i])==A.end())break;
            }
        }
    }

    return answer;
}