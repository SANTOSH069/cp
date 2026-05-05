#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> stud(n), cookie(m);

    for(int i = 0; i < n; i++) cin >> stud[i];
    for(int i = 0; i < m; i++) cin >> cookie[i];

    sort(stud.begin(), stud.end());
    sort(cookie.begin(), cookie.end());

    int i = 0, j = 0;
    int count = 0;

    while(i < n && j < m){
        if(cookie[j] >= stud[i]){
            count++;
            i++;   
        }
        j++;       
    }

    cout << count << endl;
}