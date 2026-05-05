#include <iostream>
#include <vector>


using namespace std;

class Solution {
    public:
        vector<int> Nnum(int n,vector<int>& nums){
            vector<int>res;
            if(n == 1){
                return res;
            }
    
            if(n%2 == 0){
                return Nnum(n%2,res);
            }
        return Nnum(n*3 + 1,res);
    }
    vector<string> BinStr(int n){
        
    }
};

int main(){
    int n;cin>>n;
    int res;
    Solution sol;
    vector<int>nums;
    vector<int>res = sol.Nnum(n,nums);
    cout<<res<<endl;
}