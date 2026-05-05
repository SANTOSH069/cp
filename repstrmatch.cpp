#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int Diff(vector<int>& nums, int right, int left){
    vector<int> sub(nums.begin() + left, nums.begin() + right + 1);
    int mn = INT_MAX;
    int mx = INT_MIN;

    for(int num : sub){
        if(num > mx){
            mx = num;
        }
    }

    for(int num : sub){
        if(num < mn){
            mn = num;
        }
    }
    return mx - mn;
}

int main(){
    int n,k;
    cin >> n >> k;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int left = 0;
    int count = 0;

    for(int right = 0; right < nums.size(); right++){

        while(Diff(nums, right, left) > k){
            left++;
        }

        count += (right - left + 1);
    }
    cout << count << endl;
}