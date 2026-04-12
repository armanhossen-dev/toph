#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    /*
    Input   Each of the lines contains two integers:
     A — the number of monkeys
     B — the total number of bananas collected
     
     Output
     For each input:
     Print "yayy” if the basket has more bananas than monkeys
        "perfect" if the number of bananas is exactly equal to the number of monkeys
        "booo" if there are fewer bananas than monkeys
    */

    if(b>a){
        cout << "yayy" << endl;
    }
    if(a == b){
        cout << "perfect" << endl;
    }
    if(a > b){
        cout << "booo" << endl;
    }
       
    //cout << empt << endl;
    return 0;
}