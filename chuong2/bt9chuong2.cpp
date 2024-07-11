#include<bits/stdc++.h>
using namespace std;
void t(string a)
{
	string tam;    
	stringstream ss(a);
unordered_map<char,int>diem;
	while(ss>>tam)
	{
		
		
			for(char c:tam)
			{
				diem[c]++;
			}
	}
	for(auto it=diem.begin();it!=diem.end();it++)
	{
		cout<<it->first<<" la :"<<it->second<<" "<<endl;
	}
			
}
int main()
{
	string s;
	cout<<"nhap chuoi:";
	getline(cin,s);
t(s);
	
}