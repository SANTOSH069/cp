#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
    public:
        int Beauty(string sub){
            int Min = INT_MIN;
            int Max = INT_MAX;
            const int n = sub.size();
            vector<int>freq(n+1);
            for(char ch : sub){
                freq[ch - 'a']++;
            }
            for(int f : freq){
                Max =  max(Max,f);
                Min = min(Min, f);
            }
            return Max - Min;
        }
};

int main(){
    string str;
    cin>>str;
    Solution sol;
    int sum = 0;
    for(int i = 0; i < str.size(); i++){
        for(int j = i; j < str.size(); j++){
            string sub = str.substr(i,j+1);
            sum  += sol.Beauty(sub);
        }
    }
}