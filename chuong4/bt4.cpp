#include<bits/stdc++.h>
using namespace std;
struct SoNguyen
{
	int dulieu;
	struct SoNguyen*tiep;
};
typedef struct SoNguyen*listnode;
listnode tao_node(int x)
{
	listnode node_moi=new SoNguyen();
	node_moi->dulieu=x;
	node_moi->tiep=NULL;
	return node_moi;	
}
//bool kt(listnode a)
//{
//	return a==NULL;
//}
listnode chen_cuoi(listnode &a,int x)
{
	listnode tam=tao_node(x);
	if(a==NULL)
	{
		return tam;
	}
	listnode p = a;
		while(p->tiep!=NULL)
		{
			p=p->tiep;
		}
		p->tiep=tam;
	
	return a;
}
void in(listnode a)
{
	cout<<"danh sach so nguyen la :";
	while(a!=NULL)
	{
		if(a->dulieu>0)
		{
			cout<<a->dulieu<<" ";
			a=a->tiep;
		}
	}
	cout<<endl;
}
void  diemnut(listnode a)
{
	float diem=0;
	float tong=0;
	while(a!=NULL)
	{
		if(a->dulieu>0)
		{
			diem++;
			tong+=a->dulieu;
		}
		a=a->tiep;
	}
	cout<<"so nut >0 la : "<<" "<<diem<<" "<<"trung binh cong la "<<" "<<tong/diem;
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
listnode  chencuoi(listnode a,int x)
{
	listnode tam=tao_node(x);
	if(a==NULL)
	{
		a=tam;
	}
	listnode p=a;
	while(p->tiep!=NULL)
	{
		p=p->tiep;
	}
	p->tiep=tam;
	return a;
}
void sapxep(listnode a)
{
	listnode p,b;
	for(p=a;p!=NULL;p=p->tiep)
	{
		for(b=p->tiep;b!=NULL;b=b->tiep)
		{
			if(p->dulieu>b->dulieu)
			{
				swap(&p->dulieu,&b->dulieu);
			}
		}
	}
}
void kt(listnode a)
{
	int kt;
	cout<<"nhap gia tri can tim";
	cin>>kt;
	int diem=0;
	listnode p=a;
	while(p->tiep!=NULL)
	{
		if(p->dulieu==kt)
		{
			diem++;
			cout<<"tim thay "<<" "<<kt<<"  "<<"trong danh sach ";
			break;
		}
		p=p->tiep;
	}
	if(diem==0)
	{
		cout<<"khong tim thay "<<kt<<" "<<"trong danh sach ";
	}
}
void xoa(listnode &a, int x) {
 	listnode p=a,prev=NULL;
 	while(a!=NULL&a->dulieu==x)
 	{
 		p=a;
 		a=a->tiep;
 		free(p);
	 }
	 p=a;
	 prev=NULL;
	 while(p!=NULL)
	 {
	 	if(p->dulieu==x)
	 	{
	 		listnode tam=p;
	 		p=p->tiep;
	 		if(prev==NULL)
	 		{
	 			a=p;
			 }
			 else
			 {
			 	prev->tiep=p;
			 }
			 free(tam);
		 }
		 else
		 {
		 	prev=p;
		 	p=p->tiep;
		 }
	 }
}
int main()
{
	listnode a=NULL;
	int x;
	string chon;
	getline(cin,x);
	while(true)
	{
		cout<<"nhap gia tri";
		cin>>x;
		if(x<0)
		{
			break;
		}
		a=chen_cuoi(a,x);
	}
	in(a);
	diemnut(a);
	sapxep(a);
	in(a);
	int b;
	cout<<" nhap phan tu chan chen ";
	cin>>b;
	chencuoi(a,b);
	sapxep(a);
	in(a);
	kt(a);
	xoa(a,6);
	in(a);
}
