#include<bits/stdc++.h>
using namespace std;
bool kiemtra(int so)
{

	while(so>0)
	{
		so=so%10;
		if(so%3!=0)
		{
			return false;
		}
		so=so/10;
	}
	return true;
	
}
int diem(int n)
{
	vector<int>diemnt(10000001,0);
	if(diemnt[n]!=0)
	return diemnt[n];
	int diem=0;
	if(kiemtra(n)==true)
	{
		diem++;
	}
	return diemnt[n]=diem;
}
bool sapxep(int a,int b)
{
	int x=diem(a),y=diem(b);
	if(x!=y)
	{
		return x>y;
	}
	return a>b;
	
}

int main()
{
	int n;
	cout<<"nhap so luong phan tu:";
	cin>>n;
	vector<int>dayso;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		dayso.push_back(x);
	}
	
	sort(dayso.begin(),dayso.end(),sapxep);
	for(int t:dayso)
	{
		cout<<t<<" ";
	}
}