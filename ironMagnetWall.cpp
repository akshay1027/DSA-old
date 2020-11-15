#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define G(x) ll x; cin >> x;
#define vi vector<int>
#define pb push_back
#define mape make_pair
using namespace std;

int main() 
{ 
    fastio;
    test
    {
     queue<int>steel;
    queue<int>magnet;
     int no,w; 
     cin>>no>>w;
     string a; 
     cin>>a;
     w++;
    int cond = 0;
    int res = 0;
    map<int,int>mape;

  for(int i=0;i<no;i++){
    if(a[i] == 'I'){
      steel.push(i);
      mape[i] = cond;
      if(magnet.empty())
        continue;
      while(!magnet.empty()){
        int a = magnet.front();
        if(w-abs(a-i)-abs(mape[i]-mape[a])>0){
          res++;
          magnet.pop();
          steel.pop();
          break;
          }
        magnet.pop();

      }
    }

    if(a[i] == 'M'){
      magnet.push(i);
      mape[i] = cond;
      if(steel.empty())
        continue;
      while(!steel.empty()){
        int a = steel.front();
        if(w-abs(a-i)-abs(mape[i]-mape[a])>0){
          res++;
          steel.pop();
          magnet.pop();
          break;
          }
        steel.pop();
      }
    }

    if(a[i] == ':'){
      cond++;
      mape[i] = cond;
    }

    if(a[i] == 'X')
    {
      queue<int>tmp;
      magnet = tmp;
      steel = tmp;
    }
    if(a[i] == '_')
    {
      mape[i] = cond;
    }
  }
  cout<<res<<endl;
}
}
