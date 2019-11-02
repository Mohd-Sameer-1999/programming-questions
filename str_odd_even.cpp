//str_odd_even
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(int(str[i])%2==0){
            cout<<char(int(str[i])-1);
        }
        else{
            cout<<char(int(str[i])+1);
        }
    }

    return 0;

}