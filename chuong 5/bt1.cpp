#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream doc_file("songuyen1.txt");
	int n;
	doc_file>>n;
	vector<int>dayso(n);
	for(int i=0;i<n;i++)
	{
		doc_file>>dayso[i];
	}
	sort(dayso.begin(),dayso.end());
	ofstream ghi_file("songuyen1.txt");
	for(int i=0;i<n;i++)
	{
		ghi_file<<dayso[i]<<" ";
	}
	cout<<" da sap xep cac phan tu trong file";
	doc_file.close();
	ghi_file.close();
}