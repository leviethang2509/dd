#include<iostream>
using namespace std;
struct PhanSo
{
	int tu;
	int mau;
};
int UCL(PhanSo*p)        
{
	int a=p->mau;
	int b=p->tu;
	int diem;
	if(a%b==0)                     
	{
		return b;     
	}
	while(b!=0)
	{
		diem=b;
		b=a%b;
		a=diem;
	}
	return diem;
}
void chia(PhanSo*p)
{
	int ucl=UCL(p);
	
		p->tu/=ucl;
		p->mau/=ucl;

		
}
void nhap(PhanSo*p)
{
	cout<<"nhap tu so:";
	cin>>p->tu;
	cout<<"nhap mau so:";
	cin>>p->mau;
}
void xuat(PhanSo*p)
{
	cout<<p->tu<<"/"<<p->mau<<endl;
}
PhanSo cong(PhanSo*p1,PhanSo*p2)
{
	PhanSo kq;
	kq.tu=p1->tu*p2->mau+p2->tu*p1->mau;
	kq.mau=p1->mau*p2->mau;
	chia(&kq);
		return kq;
}
PhanSo tru(PhanSo*p1,PhanSo*p2)
{
	PhanSo kqt;
	kqt.tu=p1->tu*p2->mau-p2->tu*p1->mau;
	kqt.mau=p1->mau*p2->mau;
	chia(&kqt);
	return kqt;
	
}
PhanSo nhan(PhanSo*p1,PhanSo*p2)
{
	PhanSo kqn;
	kqn.tu=p1->tu*p2->tu;
	kqn.mau=p1->mau*p2->mau;
	chia(&kqn);
	return kqn;
}
PhanSo chia(PhanSo*p1,PhanSo*p2)
{
	PhanSo kqc;
	kqc.tu=p1->tu*p2->mau;
	kqc.mau=p1->mau*p2->tu;
	chia(&kqc);
	return kqc;
}
bool kt(PhanSo*p1,PhanSo*p2)
{
	if(p1->mau==0||p2->mau==0)
	{
		return false;
	}
return true;
}
int SoSanh(PhanSo*p1,PhanSo*p2)     
{
	if(p1->tu*p2->mau-p1->mau*p2->tu==0)
	{
		return 1;
	}
	 else if(p1->tu*p2->mau-p1->mau*p2->tu>0)
	{
		return 2;
	}
		else
	{
		return -1;
	}
}


int main()
{
	PhanSo ps1, ps2,tong,ttru,nnhan,cchia,qquydong;
	cout<<"nhap phan so 1:";
	nhap(&ps1);
	cout<<"nhap phan so 2:";
	nhap(&ps2);
	string lc;
	cin.ignore();
	while(kt(&ps1,&ps2)==false)
	{
		cout<<"nhap lai"<<endl;
		nhap(&ps1);
		nhap(&ps2);
	}
	cin.ignore();
	cout<<"nhap lua chon:";
	getline(cin,lc);
	if(lc=="xuat")
	{
		xuat(&ps1);
		xuat(&ps2);
	}
		else if(lc=="+")
	{
		tong=cong(&ps1,&ps2);
	   	xuat(&tong);
	}    
		else if(lc=="-")
	{
		ttru=tru(&ps1,&ps2);
		xuat(&ttru);
	}
		else if(lc=="*")
	{
		nnhan=nhan(&ps1,&ps2);
		xuat(&nnhan);
	}
		else if(lc==":")
	{
		cchia=chia(&ps1,&ps2);
		xuat(&cchia);
	}

	else
	{
	int sosanh=SoSanh(&ps1,&ps2);
	if(sosanh==1)
	{
		cout<<ps1.tu<<"/"<<ps1.mau<<"="<<ps2.tu<<"/"<<ps2.mau;
	}
	else if(sosanh==2)
	{
		cout<<ps1.tu<<"/"<<ps1.mau<<">"<<ps2.tu<<"/"<<ps2.mau;
	}	else 
	{
		cout<<ps1.tu<<"/"<<ps1.mau<<"<"<<ps2.tu<<"/"<<ps2.mau;
	}
	}

}