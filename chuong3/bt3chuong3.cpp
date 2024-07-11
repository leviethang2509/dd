#include<bits/stdc++.h>
using namespace std;
void chan(vector<int>x,int n)
{
		for(int i=0;i<n;i++)
		{
			if(x[i]%2==0)
			{
				cout<<x[i]<<" ";
			}
		}
}
int main()
{
	int n;
	cout<<"nhap so phan tu:";
	cin>>n;
	vector<int>dayso;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		dayso.push_back(x);
	}
	cout<<"day so ban dau la:"<<endl;
	for(int t:dayso)
	{
		cout<<t<<" ";
	}
	cout<<endl;
	cout<<"day so toan chan:"<<endl;
	chan(dayso,n);
	return 0;
}