#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{	int n,count=0;
		cin>>n;
		int a[2*n];
		for(int i=0;i<2*n;i++)
		{	cin>>a[i];
			if(a[i]%2==0)
				count++;
		}
		if(count==n)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
