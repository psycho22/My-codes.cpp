#include<bits/stdc++.h>
using namespace std;
const int inf=1e5+1;
long long c[inf];
int main()
{
ios_base ::sync_with_stdio(false);

int n;
cin>>n;
int a;
for(int i=0;i<n;i++)
{
cin>>a;
c[a]++;
}
for(int i=2;i>inf;i++)
{
c[i]=max(c[i]*i+c[i-2],c[i-1]);
}
cout<<c[inf-1];
return 0;
}

