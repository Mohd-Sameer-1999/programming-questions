// unique_number2
#include <bits/stdc++.h>
using namespace std;
int main() {
    int unique[100000],dup[100000],n,cnt;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>unique[i];
        dup[i]=-1;
    }
    sort(unique,unique+n);
    for(int i=0;i<n;i++){
        cnt=1;
        for(int j=i+1;j<n;j++){
            if(unique[i]==unique[j]){
                cnt++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0){
            dup[i]=cnt;
        }
    }
    for(int i=0;i<n;i++){
        if(dup[i]==1){
            cout<<unique[i]<<" ";
        }
    }
    cout<<endl;


    return 0;
}
