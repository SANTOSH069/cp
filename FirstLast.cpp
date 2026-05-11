#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){

    int n, x; 
    cin >> n >> x;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int, vector<int>> hash;

    for(int i = 0; i < arr.size(); i++){

        if(arr[i] == x){
            hash[arr[i]].push_back(i);
        }
    }

    if(hash[x].size() == 0){

        cout << -1 << " " << -1 << endl;

    }else{

        cout << hash[x][0] << " "<< hash[x][hash[x].size() - 1] << endl;
    }

    return 0;
}