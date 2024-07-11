#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so luong phan tu:";
	cin>>n;
	vector<int>dayso;
	int tong=0;
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		dayso.push_back(m);
		tong+=m;
		if(m==0)
		{
			
			break;
		}
	}
	cout<<"tong la:"<<tong;
	return 0;
}