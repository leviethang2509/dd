#include<bits/stdc++.h>
using namespace std;
void nhap(int **a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<" nhap phan tu thu: a["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		}
	}

}
//int tong(int **a,int n,int m)
//{
//	for(int i=0;i<n;i++)
//	{
//		int diem=0;
//		for(int j=0;j<m;j++)
//		{
//			diem+=a[i][j];
//		}
//		cout<<"tong tren hang "<<i<<":"<<diem<<endl;
//	}
//}
void xuatc(int **a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		cout<<"phan tu chan tren hang:"<<i<<":";
		for(int j=0;j<m;j++)
		{
			if(a[i][j]%2==0)
			{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
void xuat(int **a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}	
}
int main()
{
	int n,m;
	
	cout<<"nhap so hang:";
	cin>>n;
	cout<<"nhap so cot:";
	cin>>m;
	int **a=new int*[n];
	for(int i=0;i<n;i++)
	{
		a[i]=new int[m];
	}
	nhap(a,n,m);
	xuat(a,n,m);
	xuatc(a,n,m);
}