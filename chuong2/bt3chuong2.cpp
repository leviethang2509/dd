#include<bits/stdc++.h>
using namespace std;
string xoakc(string a)
{
	stringstream ss(a);
	string chu;
	string kq="";
	while(getline(ss,chu,' '))
	{
		if(!chu.empty())
		{
			kq+=chu+" ";
		}
	}
	if(!kq.empty())
	{
		kq=kq.substr(0,kq.length()-1);
	}
	return kq;
}
void chuanhoa(string a)
{
	stringstream ss(a);
	string tam,b;
	while(ss>>tam)
	{
		b+=toupper(tam[0]);
		for(int i=1;i<tam.size();i++)
		{
			b+=tolower(tam[i]);
		}
		b+=" ";
	}
	cout<<" chuoi da chuan hoa la:"<<b;
}
bool tk(string a)
{
	string kt=" ";
	if(a==kt)
	return true;
}
void xuaT(string a)
{
	stringstream ss(a);
	string tam;
	int diem=0;
	while(ss>>tam)
	{
		for(int i=0;i<tam.size();i++)
		{
			diem=0;
			if(tk(tam[i])==false)
			{
				diem++;
			}
			else
			{
				break;
			}
		}
		cout<<diem;
	}
}
{
	string s;
	cout<<" nhap chuoi: ";
	getline(cin,s);
	xuat(s);
	return 0;
}
            