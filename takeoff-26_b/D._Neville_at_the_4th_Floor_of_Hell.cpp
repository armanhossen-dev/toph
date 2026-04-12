#include<iostream>
#include<vector>
using namespace std;
int main(){
    long a;
    cin >> a;
    // vector<int> ar;
    // int c = 0;        
    long sum = 0, num;
    while(a != 0){
        // c = 0;
        num = a%10;

        switch (num)
        {
        case 2:
            sum += 2;
            break;
        case 3:
            sum += 3;
            break;
        case 5:
            sum += 5;
            break;
        case 9:
            sum += 9;
            break;        
        }

        // cout << num << endl;
        // for(int i = 1; i<=num; i++){
        //     // cout << "inside prime loop" << endl;
        //     if(num%i == 0){
        //         c++;
        //     }
        // }
        // if(c == 2){
        //     // cout << num << " is prime" << endl;
        //     sum += num;
        // }              
        a = a/10;
    }
    cout << sum << endl;
    return 0;
}