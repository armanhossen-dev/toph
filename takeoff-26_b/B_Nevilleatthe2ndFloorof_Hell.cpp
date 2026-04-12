#include<iostream>
using namespace std;
int main(){
    long long b,g,s;
    cin >> b >> g;
    b *= 8;
    g *= 4;
    long long total = b - g;
    cout << total/2 << endl;
    return 0;
}