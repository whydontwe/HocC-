#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//    
//	for(int i=2 ; i<=10 ; i++)
//    {    
//        for (int j = 1; j <= 10; j++)
//        {
//            cout << i << "x" << j << "=" << i * j << endl;    
//        }
//        
//        cout << endl;
//	}
//}

//int main()
//{
//	int a,b,x,y,z;
//	a=0;
//	b=1;
//	cout << "Nhap vao 1 so: " << endl;
//	cin >> z;
//	cout << a << endl;
//	cout << b << endl;
//	for(int c=1; c<=z-2; c++)
//	{
//		x=a+b;
//		cout << x << endl;
//		y=a;
//		a=b;
//		b=x;
//	}
//	 
//}

int main()

//bai1
//{
//	int n;
//	cout<<"Nhap vao n: ";
//	cin>>n;
//	
//	int Tong = 0;
//	while(n>0)
//	{
//		Tong+=n%10;
//		n/=10;
//	}
//	cout<<"Tong chu so la: "<<Tong;
//}

//bai2
//{
//	int n;
//	cout<<"Nhap vao n: ";
//	cin>>n;
//	int dau;
//	int sau;
//	int kq=0;
//	while(n!=0)
//	{
//		kq*=10;
//		dau+=(n%10);
//		n/=10;
//	}
//	cout<<kq;
//	
//}


//{
//int x;
//cout << "nhap vao mot so nguyen bat ky: ";
//cin >> x;
//int sodaonguoc=0;
//while (x != 0)
//{
//sodaonguoc *= 10;
//sodaonguoc += (x % 10);
//x /= 10;
//}
//cout << "so dao nguoc la: "<<sodaonguoc << endl;
//system("pause");
//}


//{
//
//long int so1,so2,sodaonguoc=0;
//cout << "Nhap mot so nguyen : " << endl;
//cin>>so1;
//so2=so1;
//do
//{
//sodaonguoc=sodaonguoc*10;
//int digit=so1%10;
//sodaonguoc+=digit;
//so1/=10;
//}
//while(so1);
//cout << "So nguyen ban da nhap la " << so2 << "." << endl;
//cout << "So nguyen dao nguoc la " << sodaonguoc << "." << endl;
//return 0;
//}




//bài tap ve nha
//1) Nhap vao 1 so in ra tong cau 2 chu so do
// vd 12=1+2=3

//2) Nhap vao 1 so in ra dao nguoc
// vd 12=21
	
{
	int n;
	cin >> n;
	int a[n];
	
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}

