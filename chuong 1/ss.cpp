#include<bits/stdc++.h>
#define MAX 100
using namespace std;
void nhap(int *a,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap phan tu thu :"<<i<<" ";
		cin>>a[i];
	}
	
}
//KTNT
//bool kt(int so)
//{
//	if(so<2)
//	{
//		return false;
//	}
//	for(int i=2;i<=sqrt(so);i++)
//	{
//		if(so%i==0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
bool ktcp(int so)
{
	for(int i=1;i<=sqrt(so);i++)
	{
		if(i*i==so)
		{
			return true;
		}
	}
	return false;
}
void tong(int *a,int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(ktcp(*(a+i)))
		{
			t+=*(a+i);
		}
	}
	cout<<t;
}
void xuat(int *a,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[MAX];
	int n;
	cout<<"nhap so phan tu:";
	cin>>n;
	nhap(a,n);
	tong(a,n);
	
}