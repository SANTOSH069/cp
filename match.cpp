#include <iostream>
#include <vector>
using namespace std;

void RevArr(vector<int>& nums){
    int l = 0;
    int r = nums.size() - 1;

    while(l < r){
        swap(nums[l], nums[r]);
        l++;
        r--;
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int p1 = 0, p2 = 0;
    bool turn = true;

    while(!nums.empty()){

        int val = nums[0];

        if(turn){
            p1 += val;
        }else{
            p2 += val;
        }

        nums.erase(nums.begin());

        if(!nums.empty() && val % 2 == 0){
            RevArr(nums);
        }

        turn = !turn;
    }

    cout << p1 - p2 << endl;
}