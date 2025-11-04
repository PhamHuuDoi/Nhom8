#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}

int tich(int a, int b){
	return a*b;
}

int hieu(int a, int b){
	return a-b;
}

float thuong(int a, int b);
bool KTchanle(int n){
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	if(n%2==0)
		return true;
	else
		return false;
}

int main()
{
	
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<" Nhap a: ";
	cin>> a;
	cout<<" Nhap b: ";
	cin>> b;
	cout<<"Tong =" tong(a+b) "\n";

	cout<<"Tich =" tich(a*b) "\n";

	cout<<"Hieu =" hieu(a-b)"\n";

	int n;
	if(KTchanle==true)
	cout<<"So "<<n<<" la so chan.\n";
	else
	cout<<"So "<<n<<" la so le.\n";

	system("pause");
	return 0;
}