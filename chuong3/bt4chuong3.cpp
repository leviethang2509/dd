#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<" nhap so phan tu la:";
	cin>>n;
	vector<int>dayso;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		dayso.push_back(x);
	}
	cout<<" mang ban dau la:"<<endl;
	for(vector<int>::iterator iter=dayso.begin();iter!=dayso.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	cout<<" mang dao nguoc la:"<<endl;
	for(vector<int>::reverse_iterator iter=dayso.rbegin();iter!=dayso.rend();iter++)
	{
		cout<<*iter<<" ";
	}
	return 0;
}