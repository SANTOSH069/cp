#include <iostream>
#include <vector>
using namespace std;

void generate(vector<vector<int>> &res, vector<int> &set, vector<int> &nums, int i) {
    int n = nums.size();
    // Base case
    if (i == n) {
        res.push_back(set);
        return;
    }

    // Not take current element
    generate(res, set, nums, i + 1);

    // Take current element
    set.push_back(nums[i]);
    generate(res, set, nums, i + 1);

    // Backtrack
    set.pop_back();
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> res;
    vector<int> set;

    generate(res, set, nums, 0);

    // Print all subsets
    for (auto subset : res) {
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}" << endl;
    }

    return 0;
}