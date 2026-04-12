#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    unordered_map<int,int> freq;
    vector<int> ans(n);
    
    for(int i = n-1; i >= 0; i--){
        ans[i] = freq[a[i]];
        freq[a[i]]++;
    }
    
    for(int i = 0; i < n; i++){
        cout << ans[i];
        if(i < n-1) cout << " ";
    }
    cout << "\n";
    return 0;
}

//have to learn unordered_map