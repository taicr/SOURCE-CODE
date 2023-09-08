#include<bits/stdc++.h>
using namespace std;
class Sinhvien{
	private:
		string name,birth;
		float diem1,diem2,diem3;
	public:
		void nhap();
		void xuat();
};
void Sinhvien::nhap(){
	getline(cin,name);
	cin>>birth>>diem1>>diem2>>diem3;
	
}
void Sinhvien::xuat(){
	cout<<name<<" "<<birth<<" "<<fixed<<setprecision(2)<<diem1+diem2+diem3;
}
int main(){
	Sinhvien x;
	x.nhap();
	x.xuat();
}