#include <iostream>
#include <vector>



class Solution {
public:
    int validPairs(std::vector<int>&nums,int k){
        int count = 0;
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r)
        {
            if(nums[l] + nums[r] > k){
                count++;
                r--;
            }else{
                l++;
            }
        }
       return count; 
    }

};

int main(){
    int n,k;
    std::cin>>n>>k;
    std::vector<int>nums(n);
    for(int i = 0; i < nums.size(); i++){
        std::cin>>nums[i];
    }
    Solution sol;
    int res = sol.validPairs(nums,k);
    std::cout<<res<<std::endl;
}

