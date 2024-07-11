#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
	int tu;
	int mau;
//	int tu2;
//	int mau2;
};

void nhap(PhanSo*p)
{
	cout<<"nhap tu so 1";
	cin>>p->tu;
	cout<<"nhap mau so 1";
	cin>>p->mau;
//	cout<<"nhap tu so 2";
//	cin>>p->tu2;
//	cout<<"nhap mau so 2";
//	cin>>p->mau2;
}
int UCL(int a,int b)
{
	if(b==0)
	return a;
	return(b,a%b);
}
PhanSo rutgon(PhanSo ps)
{
	int uc=(UCL(ps.tu,ps.mau));
	ps.tu/=uc;
	ps.mau/=uc;
	return ps;
}

void xuat(PhanSo*p)
{
	cout<<p->tu<<"/"<<p->mau<<endl;
}
int main()
{
	PhanSo ps1,ps2;
	cout<<"nhap phan so 1";
	nhap(&ps1);
	cout<<"nhap phan so 2";
	nhap(&ps2);
	if(UCL(ps1.tu,ps1.mau)!=1)
	{
		ps1=rutgon(ps1);
		cout<<ps1.tu<<"/"<<ps1.mau;
	}
		if(UCL(ps2.tu,ps2.mau)!=1)
	{
		ps2=rutgon
		(ps2);
		cout<<ps2.tu<<"/"<<ps2.mau;
	}
	

}