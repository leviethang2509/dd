#include<bits/stdc++.h>
using namespace std;

 int tingtong(int so)
{
	int tong=0;
	while(so>0)
	{
		tong+=so%10;
		so/=10;
	}

	return tong;
         
}
bool sapxep(int a,int b)
{
	return tingtong(a)>tingtong(b);
}

int main()
{
	int n;
	cout<<"nhap so luong phan tu:";
	cin>>n;
	vector<int>dayso;
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		dayso.push_back(m);
	
	}
	sort(dayso.begin(),dayso.end(),sapxep);
	for(int t:dayso)
	{
		cout<<t<<" ";
	}
	return 0;
}