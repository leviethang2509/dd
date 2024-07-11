#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so phan tu:";
	cin>>n;
	while(n<2||n>50)
	{
		cout<<"nhap lai:";
		cin>>n;
	}
	vector<int>dayso;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		dayso.push_back(x);
	}
	cout<<"mang vua nhap la:";
	for(int i=0;i<n;i++)
	{
		cout<<dayso[i]<<" ";
	}
	cout<<endl;
	int k;
	cout<<"nhap gia tri can chen:";
	cin>>k;
	dayso.insert(dayso.begin()+2,k);
	for(int t:dayso)
	{
		cout<<t<<" ";
	}
	return 0;
}