#include <iostream>
using namespace std;


bool check(int mid,int x){
	return mid*mid < x;
}

int main(int argc, char const *argv[])
{
	int left = 0;
	int right = 0;
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(check(mid,x)){
			left = mid + 1;
		}
		high = mid - 1;
	}
	cout<<mid<<endl;
	return 0;
}