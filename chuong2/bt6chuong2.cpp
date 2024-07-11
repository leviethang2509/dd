#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cout<<" nhap ho va ten :";
	getline(cin,a);
	stringstream ss(a);
	string tam;
	vector<string>ten;
	while(getline(ss,tam,' '))
	{
		ten.push_back(tam);
	}
	cout<<ten[0]<<endl;
	if(ten.size()>2)
	{
		for(int i=1;i<ten.size()-1;i++)
		{
			cout<<ten[i];
			if(i<ten.size()-2)
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	cout<<ten[ten.size()-1]<<endl;
	}
