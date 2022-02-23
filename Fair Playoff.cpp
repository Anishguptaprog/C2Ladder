#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{	int s[4];
		int a[2]={0};
		for(int i=0;i<4;i++)
		{	cin>>s[i];
		}
		if(s[0]>s[1])
			a[0]=s[0];
		else 
			a[0]=s[1];
		if(s[2]>s[3])
			a[1]=s[2];
		else 
			a[1]=s[3];
		
		sort(a,a+2);
		sort(s,s+4);
		if(a[0]==s[2] && a[1]==s[3])
			cout<<"Yes"<<endl;
		else 
			cout<<"NO"<<endl;
	}
}
