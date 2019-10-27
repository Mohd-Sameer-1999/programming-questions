#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void sum(int* a,int* b,int n,int m)
{   
    int sum_a=0,sum_b=0;
    for(int i=0;i<n;i++){
        int x=a[i];
        sum_a=sum_a*10+x;
    }
    for(int i=0;i<m;i++){
        int y=b[i];
        sum_b=sum_b*10+y;
    }
    int final=sum_a+sum_b;
    int l=to_string(final).length();
    int c=0;
    for(int j=0;j<l;j++){
        int q=final/10;
        int r=final%10;
        c=c*10+r;
        final=final/10;
    }
    // cout<<c; 
    for(int j=0;j<l;j++){
        int q1=c/10;
        int r1=c%10;
        cout<<r1<<", ";
        c=c/10;
    }  
    cout<<" END";
}
int main()
{
    int a[100],b[100];
    int n,m;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        //cout<<"0";
        cin>>a[i];
    }
    cin>>m;
    for (int j=0;j<m;j++)
    {
        // cout<<"0";
        cin>>b[j];
    }
    sum(a,b,n,m);
    return(0);
}
