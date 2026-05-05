#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    int left = 0;
    int currHappy = 0;
    int maxHappy = 0;
    list<int>ls;
    for(int right = 0; right < nums.size(); right++){
        currHappy += nums[right];
        ls.push_back(nums[right]);
        while(ls.size() > 3){
            currHappy -= nums[left];
            ls.pop_front();
            left++;
        }
        if(ls.size() == k){
            maxHappy = max(maxHappy, currHappy);
        }
    }
    cout<<maxHappy<<endl;
}