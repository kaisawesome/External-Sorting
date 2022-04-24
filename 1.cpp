#include <bits/stdc++.h>
using namespace std;
#define V(a) vector<a>

int main(){
    int a,b,n,i;
    cin>>a>>b>>n;
    V(int) data(n);
    for(i=0;i<n;i++)
        cin>>data[i];
    
    sort(data.begin(),data.end());
    for(auto i:data)
        cout<<i<<"\n";
    
    return 0;
}