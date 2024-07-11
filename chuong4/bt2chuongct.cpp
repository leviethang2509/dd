#include<bits/stdc++.h>
#define MAX 100
using namespace std;
struct SinhVien
{
	string HoTen;
	float DiemT,DiemNN;
	SinhVien*tiep;
};
SinhVien *pdau=NULL;
void nhap(SinhVien*p)
{
	cout<<"nhap ho ten";
	getline(cin,p->HoTen);
	cout<<" nhap diem ngoai ngu - Diem Tin";
	cin>>p->DiemNN>>p->DiemT;
	cin.ignore();
}
float DTB(SinhVien*p)
{
	return (p->DiemT+p->DiemNN)/2;
}

void XG(SinhVien*arr,int n)
{
	int diem=0;
	for(int i=0;i<n;i++)
	{
		diem++;
		if(DTB(&arr[i])>=8&&arr[i].DiemT>=8&&arr[i].DiemNN>=8)
		{
			cout<<arr[i].HoTen<<" "<<"Diem Toan"<<arr[i].DiemT<<" "<<"DiemNN"<<arr[i].DiemT<<" "<<arr[i].DiemNN;
		}
	if(diem==0)
	{
		cout<<" khong co sinh vien xep loai gioi";
	}
	
}
}

void sapxep(SinhVien* arr, int n) {

	for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (DTB(&arr[i]) < DTB(&arr[j])) {
                swap(arr[i].HoTen, arr[j].HoTen);
                swap(arr[i].DiemT, arr[j].DiemT);
                swap(arr[i].DiemNN, arr[j].DiemNN);
            }
        }
    }
}

void TKTL(SinhVien*arr,int n)
{
			int diem=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i].DiemT<5)
		{
		 diem++;
			cout<<arr[i].HoTen<<" "<<"Diem Tin:"<<arr[i].DiemT<<endl;
		}
		else if(arr[i].DiemNN<5)
		{
			diem++;
			cout<<arr[i].HoTen<<" "<<"Diem Ngoai Ngu"<<arr[i].DiemNN<<endl;
		}
		else if((arr[i].DiemT<5&&arr[i].DiemNN<5))
		{
			cout<<arr[i].HoTen<<" "<<"Diem Tin:"<<arr[i].DiemT<<" "<<"Diem Ngoai Ngu"<<arr[i].DiemNN<<endl;
		}
	
	}
	if(diem==0)
	{
		cout<<"khong co sinh vien thi lai:";
	}
}
void xuat(SinhVien arr[], int n) {
    cout << "| " << setw(20) << left << "Ten"
         << " | " << setw(5) << "DiemT"
         << " | " << setw(5) << "DiemNN"
         << " | " << setw(5) << "DTB"
         << " | " << setw(10) << "Ket qua"
         << " |" << endl;

    for (int i = 0; i < n; i++) {
        string name = arr[i].HoTen;
        int diemT = arr[i].DiemT;
        int diemNN = arr[i].DiemNN;
    	string ketqua=" ";
    	
       if(DTB(&arr[i])>=8&&arr[i].DiemT>=6.5&&arr[i].DiemNN>=6.5)
		{
			ketqua+="Gioi";
		}
		else if(DTB(&arr[i])>=6.5&&arr[i].DiemT>=5&&arr[i].DiemNN>=5)
		{
			ketqua+="Kha";	
		}
		else
		{
			ketqua+="T.Binh";
		}

        cout << "| " << setw(20) << left << name
             << " | " << setw(5) << diemT
             << " | " << setw(5) << diemNN
             << " | " << setw(5) << fixed << setprecision(1) << DTB(&arr[i])
             << " | " << setw(10) << ketqua
             << " |" << endl;
    }
  
}
  void xuatG(SinhVien*p)
    {
    	cout<<p->HoTen<<"  ";
    	cout<<p->DiemNN<<"  ";
    	cout<<p->DiemT<<"  ";
    	cout<<DTB(p)<<endl;
	}
int main()
{
	SinhVien arr[MAX];
	int n;
	int chon;
	do
	{
		system("cls");
		cout<<" 1.nhap sinh vien "<<endl;
		cout<<" 2.Xuat sinh vien "<<endl;
		cout<<" 3.Danh Sach sinh vien thi lai"<<endl;
		cout<<" 4.Nhung sinh vien co diem TB cao nhat"<<endl;
		cout<<" 5.Sinh Vien sep loai gioi"<<endl;
		cout<<" 6.Danh Sach sinh vien giam theo DTB"<<endl;
		cout<<" nhap lua chon "<<endl;
		cin>>chon;
		switch(chon)
		{
			case 1:
				cout<<" nhap so luong sinh vien";
				cin>>n;
				cin.ignore();
				for(int i=0;i<n;i++)
				{
					nhap(&arr[i]);
				}
				break;
			case 2:
				xuat(arr,n);
				break;
			case 3:
				TKTL(arr,n);
				break;
			case 4:
				XG(arr,n);
				break;
//			case 5:
//				int diem=0;
//				for(int i=0;i<n;i++)
//				{
//					diem++;
//					sapxep(arr,n);
//					for(int i=0;i<n;i++)
//					{
//						xuatG(&arr[i]);
//					}
//				}
//				break;
			case 6:
				sapxep(arr,n);
				for(int i=0;i<=3;i++)
				{
					xuatG(&arr[i]);
				}
			case 7:
				break;
		
		}
		cout<<endl;
		system("pause");
	}while(chon!=7);

}