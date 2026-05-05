#include <iostream>
using namespace std;

int main(){
    string str = "123";
    long res = 0;
    for(int i = 0; i < str.size(); i++){
        res = (res*10) + (str[i] - '0');
    }
    cout<<res;
}