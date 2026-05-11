#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;cin>>n;
	vector<int>nums(n);
	for(int i = 0; i < nums.size(); i++){
		cin>>nums[i];
	}
	for(int i = nums.size() - 1; i >= 0; i--){
		nums.push_back(nums[i]);
	}
	for(auto num : nums){
		cout<<num<<" ";
	}
	return 0;
}