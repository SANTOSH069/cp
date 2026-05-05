#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string str = "listen";
    string str2 = "silent";
    bool isAnang = true;
    if(str.size() != str2.size()){
        isAnang = false;
        cout<<isAnang;
    }else{
    unordered_map<char,int> hash;
    for(char ch : str){
        hash[ch]++;
    }
    for(char ch : str2){
        hash[ch]--;
    }
    for(auto &p : hash){
        if(p.second != 0){
            isAnang = false;
            cout<<isAnang;
        }
    }
}
cout<<isAnang;
}