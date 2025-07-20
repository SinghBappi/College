#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int t){
        // first of all , it will run outer loop
        for(int i=0;i<nums.size();i++){
            // ek internal loop chalega
            for(int j =i+1 ; j<nums.size();j++){
                // i arr[i] per hoga toh j arr[i+1] per hoga
                // yaha per varable create nhi hoga cause of space complexity
                if(nums[i]+nums[j]==t){
                    // condition true hone per 
                    // return hoga
                    return {i,j};
                }
            }
        }
        return {};
    }
};



int main(){


    return 0;
}