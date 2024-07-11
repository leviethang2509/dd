#include<bits/stdc++.h>
#define MAX 100
using namespace std;
 struct SinhVien
{
	string MaSV;
	string HoTen;
	float  DiemGK;
	float  DiemCK;
};
void nhap(SinhVien dssv[],int&n)
{
	
	cout<<" nhap so luong sv:";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<" nhap masv:";
		getline(cin,dssv[i].MaSV);
		cout<<" nhap ho ten:";
		getline(cin,dssv[i].HoTen);
		cout<<"nhap diem giua ki";
		cin>>dssv[i].DiemGK;
		cout<<"nhap diem cuoi ki";
		cin>>dssv[i].DiemCK;
		cin.ignore();
		
		
	}
}
void luu(SinhVien dssv[], int n) {
    ofstream file("qlsv.txt");
    if (!file.is_open()) {
        cout << "Khong the mo file de ghi!" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        file << "Ma SV: " << dssv[i].MaSV << endl;
        file << "Ho ten: " << dssv[i].HoTen << endl;
        file << "Diem giua ky: " << dssv[i].DiemGK << endl;
        file << "Diem cuoi ky: " << dssv[i].DiemCK << endl;
        file << endl;
    }

    file.close();
    cout << "Da luu danh sach sinh vien vao file qlsv.txt" << endl;
}
int main()
{
	SinhVien dssv[100];
	int n;
	nhap(dssv,n);
	luu(dssv,n);
}