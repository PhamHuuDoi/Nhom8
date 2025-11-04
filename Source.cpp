#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b);
float thuong(int a, int b);
bool isPerfect(int n){
	if(n<=1) return false;
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum==n;
}
int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<" Nhap a: ";
	cin>> a;
	cout<<" Nhap b: ";
	cin>> b;
	cout<<"Tong ="<< tong(a+b) <<"\n";
	cout<<"Hieu ="<< hieu(a-b)<<"\n";
	int n;
	cout<<"Nhap so n: ";
	cin>>n;
	if(isPerfect(n))
	cout<<n<<"La so hoan hao.\n";
	else
	cout<<n<<"Khong la so hoan hao.\n";
	system("pause");
	return 0;
}