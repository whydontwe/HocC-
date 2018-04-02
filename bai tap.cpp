#include <iostream>

using namespace std;

main()
{
	int a;
	int b;
	cout<< "Nhap vao mot thang bat ki: ";
	cin>> a;
	cout<< "Nhap vao 1 nam: ";
	cin>> b;		
	if(a==2)
	{
		if(b%4==0) cout << "29 ngay";
		else cout << "28 ngay";
	}
	else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)cout << "31 ngay";
	else if(a==4||a==6||a==9||a==11) cout << "30 ngay";
	else return 0;
}
