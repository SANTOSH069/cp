#include <iostream>
#include <vector>

using namespace std;

int generate(vector<int> nums, int i, int sum, int k) {

    if (i == nums.size()) {
        if (sum == k)
            return 1;
        return 0;
    }

    int include = generate(nums, i + 1, sum + nums[i], k);

    int exclude = generate(nums, i + 1, sum, k);

    return include + exclude;
}

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = generate(nums, 0, 0, k);

    cout << ans << endl;

    return 0;
}