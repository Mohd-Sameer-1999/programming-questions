// need_some_change
// 1 2 3 4 5
// first iteration :swapping 1 and 3
// result:3 2 1 4 5
// second iteration :swapping 2 and 4
// result:3 4 1 2 5
// third iteration : swapping 1 and 5
// result:3 4 5 2 1 



#include <iostream>
using namespace std;
void swapElements(int[], int);

int main() {
	
	int testcase;	
	cin >> testcase;

	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        
	    swapElements(arr, sizeof_array);
	    
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}

void swapElements(int arr[], int sizeof_array){
    int n=sizeof_array;
    for(int i=0;i<n;i++){
        if(i+2<n){            
            swap(arr[i],arr[i+2]);
        }
    }
    
}