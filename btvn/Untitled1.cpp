#include<bits/stdc++.h>
using namespace std;
bool ktsnt(int so)
{
	if(so<2)
	{
		return false;
	}
	for(int i=2;i<=sqrt(so);i++)
	{
		if(so%i==0)
		{
			return false;
		}
	}
	return true;
}
bool ktshh(int so)
{
	int tong=0;
	for(int i=1;i<so;i++)
	{
		if(so%i==0)
		{
			tong+=so;
		}
	}
	return tong==so;
}
bool ktscp(int so)
{
	return sqrt(so)*sqrt(so)==so;
}
int main()
{
	ifstream doc_file("songuyen.txt");
	ofstream snt_file("songuyento.txt");
	ofstream scp_file("sochinhphuong.txt");
	ofstream shh_file("sohoanhao.txt");
	int n;
	doc_file>>n;
	vector<int>dayso(n);
	for(int i=0;i<n;i++)
	{
		doc_file>>dayso[i];
	}
	for(int t:dayso)
	{
		if(ktsnt(t))
		{
			snt_file<<t<<endl;
		}
		if(ktscp(t))
		{
			scp_file<<t<<endl;
		}
		if(ktshh(t))
		{
			shh_file<<t<<endl;
		}
	}
	cout<<" doc file thanh cong";
	doc_file.close();
	snt_file.close();
	scp_file.close();
	shh_file.close();
	return 0;
}