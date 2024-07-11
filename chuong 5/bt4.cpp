#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream doc_file("songuyen1.txt");
	ifstream doc_file2("songuyen2.txt");
	if(doc_file.is_open()&&doc_file2.is_open())
	{
		int so1;
		vector<int>dayso;
		while(doc_file>>so1)
		{
			dayso.push_back(so1);
		}
		sort(dayso.begin(),dayso.end());
//		ifstream doc_file2("songuyen2.txt");
		int so2;
		while(doc_file2>>so2)
		{
			dayso.push_back(so2);
		}
		sort(dayso.begin(),dayso.end());
		ofstream ghi_file("songuyen3.txt");
		for(int i=0;i<dayso.size();i++)
		{
			ghi_file<<dayso[i]<<" ";
		}
	}
	else
	{
		cout<<" loi";
	}
	
}
