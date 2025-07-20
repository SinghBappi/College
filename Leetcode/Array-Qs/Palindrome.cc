#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10 == 0 && x!=0)) return false;
        // if(x == 0) return false;
            int origin = x;
            long long r =0;
        while(x!=0){
            // storage ke liye 
            int operation = x % 10;
             r = r * 10 + operation;
            x/=10;


        }
        return origin == r;
    }
};
int main(){



    return 0;
}