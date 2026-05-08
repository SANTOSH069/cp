#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    string str; cin>>str;
    unordered_map<char,int>hash;
    int count = 0;
    for(auto ch : str){
        hash[ch]++;
    }
    for(auto &p : hash){
        if(p.second == 1){
            count++;
        }
    }
    cout<<count<<endl;
    if(count%2 == 0){
        cout<< "CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}