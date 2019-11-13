#include <bits/stdc++.h>
using namespace std;

void find_element(int* arr,int n,int k){
    sort(arr,arr+n);
    cout<<arr[k-1]<<endl;
}
int main() {
    int arr[100000],t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        find_element(arr,n,k);
    }
    
	return 0;
}
