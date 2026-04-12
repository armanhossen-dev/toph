#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t; 

    long long n, en = 0;
    int k;
    vector<int> res;

    for(int i = 0; i<t; i++){
        cin >> n >> k ;
        en = 0;
        for(int ii = 0; ii<k; ii++){
            if(n == 0){
                break;
            }
            else if(n%3 == 0){
                    n = n/3; 
                    en += 2;
            }else if(n%2 == 0){
                n = n/2; 
                en += 1;
            }else{
                n = n -1; 
                en += 1;
            }
        }
        if(n == 0){
            res.push_back(en);
        }else{
            res.push_back(-1);
        }
    }

    for(int r : res){
        cout << r << endl;
    }
    return 0;
}