#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin>>n;
	vector<int>bills(n);
	bool valBills = true;
	for(int i = 0; i < bills.size(); i++) cin>>bills[i];
	int curr = 0;
	for(int i = 0; i < bills.size(); i++){
		if(bills[i] == 5){
			curr += bills[i];
		}
		if(bills[i] > 5){
			if(bills[i] == 10){
				if(curr >= 5){
					curr -= 5;
					continue;
				}else{
					valBills = false;
				}
			}else if(bills[i] == 20){
				if(curr >= 10){
					curr -= 15;
					continue;
				}else{
					valBills = false;
					break;
				}
			}
		}
	}
	if(valBills){
		cout<<"True"<<endl;
	}else{
		cout<<"False"<<endl;
	}
	return 0;
}