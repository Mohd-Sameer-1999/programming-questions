#include<iostream>
using namespace std;
void series(int n1,int n2){
	int i=1,count=1;
	while(count<=n1){
		int m=3*i+2;
		if(m%n2!=0){
			cout<<m<<endl;
			count++;
		}
		i++;
	}
}
int main() {
	int n1,n2;
	cin>>n1>>n2;
	series(n1,n2);
	return 0;
}