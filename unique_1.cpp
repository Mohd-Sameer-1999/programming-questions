//unique_1
#include <iostream>
using namespace std;
int findUnique_1(int *a,int n)
{
	int cnt[64]={0};
	for(int j=0;j<=n;j++)
	{
		int i=0;
		int no=a[j];
		while(no>0)
		{
			cnt[i]+= (no & 1);
			i++;
			no= no>>1;
		}
	}
	int p=1;
	int ans=0;
	for (int i=0; i<64; i++)
	{
		
		cnt[i]%= 2;
		ans+=cnt[i]*p;
		p=p<<1;
	}

	return ans;
}	
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
    	cin>>a[i];
    }

    cout<<findUnique_1(a,n)<<endl;


	return 0;
}