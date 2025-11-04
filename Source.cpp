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


bool isPerfect(int n){
	if(n<=1) return false;
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum==n;}


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
	cout<< "helo"
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
	cout<<"Nhap so can kiem tra";
	if(isPrime(n)){
		cout<<"\n"<< n <<" la so nguyen to";
	} else{
		cout<<"\n "<< n <<"khong phai la so nguyen to";
	}
	if(KTchanle(n))
	cout<<"So "<<n<<" la so chan.\n";
	else
	cout<<"So "<<n<<" la so le.\n";

	system("pause");
	return 0;
}