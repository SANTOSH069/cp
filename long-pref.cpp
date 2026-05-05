#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string words[3] = {"flower","flow","flight"};
    
    string pref = words[0];
    int k = pref.size();

    while(k > 0){
        string target = pref.substr(0, k);

        bool isMatch = all_of(begin(words), end(words),
            [&](string s){
                return s.substr(0, k) == target;
            });

        if(isMatch){
            cout << target << endl;
            break;
        }else{
            k--;
        }
    }

    return 0;
}