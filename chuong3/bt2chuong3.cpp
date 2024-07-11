#include<bits/stdc++.h>
using namespace std;
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
	int k;
	cout<<"nhap vi tri can xoa";
	cin>>k;
	if(k<n)
	{
		dayso.erase(dayso.begin()+k);
	}
	else
	{
		while(k>n)
		{
		cout<<"nhap lai:";
		cin>>k;
		}
		dayso.erase(dayso.begin()+k);
		
	}
	for(int t:dayso)
	{
		cout<<t<<"-";
	}
	return 0;
}