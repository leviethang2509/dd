#include<bits/stdc++.h>
using namespace std;
string docso(int so)
{
	string hang_dv[]={"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
	string hang_chuc[]={"","muoi","hai muoi","ba muoi","bon muoi","nam muoi","sau muoi","bay muoi","tam muoi","chin muoi"};
	string hang_tram[]={"","mot tram","hai tram","ba tram","bon tram","nam tram","sau tram","bay tram","tam tram","chin tram"};
	string kq="";
	int tram=so/100;
	int chuc=(so%100)/10;
	int donvi=so%10;
	if(tram!=0)
	{
		kq+=tram[hang_tram]+" ";
		
	}
	if(chuc!=0)
	{
		kq+=chuc[hang_chuc]+" ";
	}
	if(donvi!=0)
	{
		kq+=donvi[hang_dv];
	}
	return kq+'\n';
}
int main()
{
	vector<int>so;
	int tam;
	int n;
	cout<<" nhap so chu so:"<<endl;
	cin>>n;
	cout<<" nhap day so:"<<endl;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		so.push_back(x);
	}
	cout<<"so  vua nhap la :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<docso(so[i])<<" ";
	}
	return 0;
}