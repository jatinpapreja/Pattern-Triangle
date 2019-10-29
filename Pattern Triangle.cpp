#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)cout<<'\t';
        for(j=i;j<=(2*i)-1;j++)cout<<j<<'\t';
        for(j=2*(i-1);j>=i;j--)cout<<j<<'\t';
        cout<<endl;
    }
}
