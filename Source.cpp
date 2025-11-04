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

bool isPrime(int n) {
   
    if (n <= 1) return false; 
    if (n == 2) return true; 
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
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
	cont<<"Nhap so can kiem tra";
	int n;
	cin>>n;
	if(isPrime(n)){
		cout<<"\n" n " la so nguyen to";
	} else{
		cout<<"\n " n "khong phai la so nguyen to"
	}
	system("pause");
	return 0;
}