#include <iostream>

using namespace std;

int main(){
    string s; cin>>s;
    string t; cin>>t;
    char res;
    for(int i = 0; i < s.length(); i++){
        res = s[i] ^ t[i];
    }
    if(res != 0){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
}