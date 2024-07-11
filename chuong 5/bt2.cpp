#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream doc_file("songuyen1.txt");
	if(doc_file	.is_open())   
	{
		
		vector<int>dayso;
		int so;
		while(doc_file>>so)
		{
			dayso.push_back(so);
		}
		sort(dayso.begin(),dayso.end());
		ofstream ghi_file("songuyen1.txt");
		for(int i=0;i<dayso.size();i++)
		{
			ghi_file<<dayso[i]<<" ";
		}
	}
	else
	{
		cout<<" khong tim thay file songuyen1.txt";
	}
	return 0;
	
	
}