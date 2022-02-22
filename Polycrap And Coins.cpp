#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{	int n;
		cin>>n;
		int a,b;
		a=n/3;
		b=a;
		if(n%3==1)
			a+=1;
		else if (n%3==2)
			b+=1;
		cout<<a<<" "<<b<<endl;
	}
	return 0;
	
}
