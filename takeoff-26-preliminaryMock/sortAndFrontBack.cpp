#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(4);
    a.push_back(44);
    a.push_back(440);

    sort(a.begin(), a.end());
    
    cout << a.front() << ' ' << a.back() << endl;
    return 0;
}