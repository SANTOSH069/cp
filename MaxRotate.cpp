#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void rotArr(vector<int>& nums){
    int last = nums.back();
    int n = nums.size();

    for(int i = n - 1; i > 0; i--){
        nums[i] = nums[i - 1];
    }
    nums[0] = last;
}
int sumArr(vector<int>& nums){
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i] * i;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<int> res;

    int k = n; 
    while(k > 0){
        rotArr(nums);
        res.push_back(sumArr(nums));
        k--;   
    }

    auto it = max_element(res.begin(), res.end());
    if(it != res.end()){
        cout << *it << endl;
    }

    return 0;
}