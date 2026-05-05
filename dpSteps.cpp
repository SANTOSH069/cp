#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define nums 50
int func(int i){
	if(i == 0){
		return 0;
	}
	int cost = INT_MAX;
	cost = min(cost, func(i-1) + abs( heights[i] - heights[i - 1]));

	if(i > 1){
		cost = min(cost, func(i-2) + abs( heights[i] - heights[i - 2]));
	}
	return cost;
}


int main(){
	int n;cin>>n;
	int arr[nums];
	vector<int>heights(n);
	for(int i = 0; i < heights.size(); i++) cin>>heights[i];
	cout<<"The Elements of the vector are:\n"<<endl;
	for (int i = 0; i < heights.size(); i++)
	{
		cout<<heights[i]<<" ";
	}
}