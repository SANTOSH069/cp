#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t-- > 0)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        string str2;
        cin>>str2;
        int count = 0;
        const char* arr1 = str.c_str();
        const char* arr2 = str2.c_str();
        for(int i = 0; i < str.size(); i++){
            if(arr1[i] != arr2[i]){
                count++;
            }else{
                count += 0;
            }
        }
        if(count%2 != 0){
            cout<<1;
        }else{
            cout<<0;
        }
    }
    
}