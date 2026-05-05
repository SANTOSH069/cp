#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int collecDishes(vector<int>&nums, int tg){
            int count = 0;
            for(int i = 0; i < nums.size() - 1; i++){
                if(nums[i] == tg && nums[i] != nums[i + 1]){
                    count++;
                }
            }
            if(nums[nums.size() - 1] == tg){
                if(nums[nums.size() - 1] != nums[nums.size() - 2]){
                    count++;
                }
            }
            return count;
        }
};

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    Solution sol;
    for(int i = 0; i < nums.size(); i++){
        cin>>nums[i];
    }
    int res1 = sol.collecDishes(nums, 1);
    int res2 = sol.collecDishes(nums,2);
}