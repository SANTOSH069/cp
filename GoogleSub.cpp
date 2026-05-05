#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i = 0; i < nums.size(); i++){
        cin>>nums[i];
    }
    int currSum = 0;
    int beg  = 0;
    int end = 0;
    int left  = 0;
    int maxLen = 0;
    for(int right = 0; right < nums.size(); right++){
        currSum += nums[right];
        while(currSum  > k){
            currSum -= nums[left];
            left++;
        }
        if(currSum <= k){
            int currLen = right - left + 1;
            if(currLen > maxLen){
                maxLen = currLen;
                beg = left;
                end = right;
            }
        }
        vector<int>res(nums.begin() + left, nums.begin() + right + 1);
        for(int num : res){
            cout<<num<<" ";
        }
    }
}