#include<bits/stdc++.h>
using namespace std;
void dao(string a)
{
	stringstream ss(a);
	string tam;
	vector<string>chu;
	while(ss>>tam)
	{
		chu.push_back(tam);
	}
	for(int i=chu.size()-1;i>=0;i--)
	{
		cout<<chu[i]<<endl;
	}
}
int main()
{
	string s;
	cout<<" nhap chuoi:";
	getline(cin,s);
	dao(s);
}