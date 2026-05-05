#include <iostream>
#include <vector>
using namespace std;

int subSeqSum(vector<int>& nums, int i, int sum, int k) {
    if (i == nums.size()) {
        return (sum == k) ? 1 : 0;  
    }

    int inc = subSeqSum(nums, i + 1, sum + nums[i], k);
    int exc = subSeqSum(nums, i + 1, sum, k);

    return inc + exc;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << subSeqSum(nums, 0, 0, k);
}