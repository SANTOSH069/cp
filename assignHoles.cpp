#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x;cin>>x;
    vector<vector<int>> mat(2,vector<int>(2));
    int n = mat.size();
    int m = mat[0].size();
    int tot = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>mat[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        if(mat[i][0] == x){
            int idx = i;
            for(int j = 0; j < m; j++){
                tot += mat[idx][j];
            }
        }
    }
    cout<<tot<<endl;
}