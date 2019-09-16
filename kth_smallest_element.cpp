//kth_smallest_element
#include <iostream>
using namespace std;

int merge(int *a,int *x,int *y,int s,int e){
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int k=s;

	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k]=x[i];
			k++;
			i++;
		}
		else{
			a[k]=y[j];
			k++;
			j++;
		}
	}

	while(j<=e){
		a[k]=y[j];
		k++;
		j++;
	}

	while(i<=mid){
		a[k++]=x[i++];
	}

}
int MergeSort(int *a,int s,int e){
	// base case
	if(s>=e){
		return 0;
	}
	// divide
	int x[100],y[100];
	int mid=(s+e)/2;
	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}
	for(int i=mid+1;i<=e;i++){
		y[i]=a[i];
	}
	// sort
	MergeSort(x,s,mid);
	MergeSort(y,mid+1,e);
	// merge
	merge(a,x,y,s,e);
}
void find_element(int* arr,int n,int k){
    MergeSort(arr,0,n-1);
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