// diff_ascii
#include <bits/stdc++.h>
using namespace std;
int main() {
     string str;
     getline(cin,str);
     for(int i=0;i<str.size();i++){
    	cout<<str[i];
		int j=i+1;
		if(j<str.size()){
			int ascii=str[j]-str[i];
        	cout<<ascii;
		}
     }
    
    return 0;
}