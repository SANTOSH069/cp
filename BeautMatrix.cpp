#include <bits/stdc++.h>

using namespace std;

int main() {

    int r, c;
    cin >> r >> c;

    vector<vector<int>> nums(r, vector<int>(c));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> nums[i][j];
        }
    }

    int res = 0;
    int mid = nums.size() / 2;

    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums[i].size(); j++){

            if(nums[i][j] == 1){

                int row = i;
                int col = j;

                res = abs(row - mid) + abs(col - mid);
            }
        }
    }

    cout << res << endl;

    return 0;
}