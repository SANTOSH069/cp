#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int maxDistance(vector<int>& nums1, vector<int>& nums2){
            int maxDis = INT_MIN;
            for(int i = 0; i < nums1.size(); i++){
                for(int j = i + 1; j < nums2.size(); j++){
                    if(i <= j && nums1[i] <= nums2[j]){
                        maxDis = max(maxDis, j - i);
                    }else{
                        continue;
                    }
                }
            }
            return maxDis;
        }
};

int main(){
    int n;cin>>n;
    int m;cin>>m;
    vector<int>nums1(n);
    vector<int>nums2(m);
    for(int i = 0; i < n; i++){
        cin>>nums1[i];
    }
    for(int i = 0; i < m; i++){
        cin>>nums2[i];
    }
    Solution sol;
    int res = sol.maxDistance(nums1,nums2);
    cout<<res;
}

