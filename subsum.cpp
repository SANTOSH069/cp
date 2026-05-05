#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;


int subSum(list<int>&ls){
    int sum = 0;
    for(int num : ls){
        sum += num;
    }
    return sum;
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    list<int>ls;
    for(int i = 0; i < nums.size(); i++){
        cin>>nums[i];
    }
    int left = 0;
    int count = 0;
    for(int right = 0; right < nums.size(); right++){
         ls.push_back(nums[right]);
         while(subSum(ls) < k){
            if(!ls.empty()){
                ls.pop_front();
            }
            left++;
         }
         if(subSum(ls) >= k){
            count++;
         }else{
            count += 0;
         }
    }
    cout<<count<<endl;
}