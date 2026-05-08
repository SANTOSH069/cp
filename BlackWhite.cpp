#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;


int main(){
    int t; cin >> t;

    while(t--){
        int n, k; 
        cin >> n >> k;

        string str; 
        cin >> str;

        int currWh = 0;
        int minCurrWh = INT_MAX;

        int left = 0;

        for(int right = 0; right < str.size(); right++){

            if(str[right] == 'W'){
                currWh++;
            }

            while(right - left + 1 > k){

                if(str[left] == 'W'){
                    currWh--;
                }

                left++;
            }

            if(right - left + 1 == k){
                minCurrWh = min(minCurrWh, currWh);
            }
        }

        cout << minCurrWh << endl;
    }
}