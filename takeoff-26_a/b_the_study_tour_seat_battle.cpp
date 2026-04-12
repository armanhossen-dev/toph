#include<iostream>
using namespace std;
int main(){
    int n,x,s;
    cin >> n >> x >> s;
    //N is the number of buses, 
    //X is the number of seats in each bus and 
    //S is the number of students who finally took their seats.
    int total = n*x;
    int empt = total - s;
    //empt seats
    cout << empt << endl;
    return 0;
}