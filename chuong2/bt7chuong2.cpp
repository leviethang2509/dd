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
		kq=kq.substr(0,kq.size()-1);
	}
	return kq;
}
int main()
{
	string s;
	cout<<"nhap chuoi:";
	getline(cin,s);
	cout<<xoakc(s);
	return 0;
	
}