#include <iostream> 
#include <vector>
using namespace std;



int main(){
    int r,c;cin>>r>>c;
    vector<vector<int>>nums(r, vector<int>(c,0));
    for(int i = 0; i < r;i++){
        for(int j = 0; j < c;j++){
            cin>>nums[i][j];
        }
    }
    int mid = nums.size() / 2;
    

}