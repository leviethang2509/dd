#include<bits/stdc++.h>
#define MAX 100
using namespace std;
struct SinhVien
{
	string MaSV;
	string HoTen;
	float DiemA,DiemT,DiemV;	
};
bool kt(int so)
{
	while(so>10)
	{
		cout<<" nhap lai diem <=10 ";
		return false;
	}
	cin>>so;
	return true;
}
void nhap(SinhVien *p)
{
	cout<<"nhap ma so sinh vien";
	getline(cin,p->MaSV);
	cout<<"nhap ho ten";
	getline(cin,p->HoTen);
	cout<<"nhap diem toan-van-anh:";
	cin>>p->DiemA>>p->DiemT>>p->DiemV;
	cin.ignore();
}
void xuat(SinhVien* p)
{
	cout<<" MSSV:"<<p->MaSV<<endl;			
	cout<<"Hoten:"<<p->HoTen<<endl;
	cout<<"Diem Toan - Diem Van -Diem Anh :"<<" ";
	cout<<p->DiemT<<" ";
	kt(p->DiemT);
	cout<<p->DiemV<<" ";
	cout<<p->DiemA<<" ";
	cout<<endl;
}
int TD(SinhVien* p)
{
	return (p->DiemT+p->DiemA+p->DiemV)/3;
}
int TKD(SinhVien* arr,int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(TD(&arr[i])>=5&&arr[i].DiemT>=5&&arr[i].DiemA>=5&&arr[i].DiemV>=5)
		{
			t++;
		}
	}
	return t;
}
void TKR(SinhVien*arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int b=TD(&arr[i]);
		if(b<5||arr[i].DiemT<5||arr[i].DiemA<5||arr[i].DiemV<5)
		{
			cout<<arr[i].HoTen<<" "<<"Tong Diem:"<<b<<endl;
		}
	}
}
int main()
{
	SinhVien arr[MAX];
	int n;
	cout<<"nhap so luong sinh vien:";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		nhap(&arr[i]);
	}
//	cout<<"xuat du lieu:"<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<"du lieu sinh vien thu "<<i+1<<"la:"<<endl;
//		xuat(&arr[i]);
//	}
	cout<<" so sinh vien dau:"<<TKD(arr,n)<<endl;
	cout<<"so sinh vien rot:"<<endl;
	TKR(arr,n);
	return 0;
}