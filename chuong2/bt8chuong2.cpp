#include<bits/stdc++.h>
using namespace std;
bool ktdx(string a)
{
	int left=0;
	int right=a.size()-1;
	while(right>left)
	{
		if(a[right]!=a[left])
		{
		return false;
	}
	
	left++;
	right--;
	}
	return true;
}
int main()
{
	string s;
	cout<<" nhap chuoi :";
	getline(cin,s);
	if(ktdx(s))
	{
		cout<<" chuoi doi xung";
	}
	else
	{
		cout<<" chuoi khong doi        
	}
	         
}