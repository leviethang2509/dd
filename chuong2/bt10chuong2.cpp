#include<bits/stdc++.h>
using namespace std;
string kt(string a)
{
	stringstream ss(a);
	string tam;
	string kq="";
	while(ss>>tam)
	{
		for(int i=0;i<tam.size();i++)
		{
			if(islower(tam[i]))
			{
				kq+=toupper(tam[i]);
			}
			else
			{
				kq+=tolower(tam[i]);
			}
		}
		kq+=" ";
	}
	kq.pop_back();
	return kq;
}

int main()
{
	string s;
	cout<<"nhap chuoi:";
	getline(cin,s);
	cout<<kt(s);
	return 0;
}
