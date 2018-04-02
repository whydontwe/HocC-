#include <iostream>

using namespace std;

main (){
	char Loai;
	int Soluong;
	int Gia;
	int Tong;
	int Thanhtien;
	cout << "Nhap vao loai hang: ";
	cin >> Loai ;
	cout << "Nhap vao so luong: ";
	cin >> Soluong;
	cout << "Nhap gia: ";
	cin >> Gia;
	
	Tong=Soluong*Gia;
	if (Loai=='A')
	{
		if(Tong>=10000)
		{
		Thanhtien=(Tong-(Tong*10/100));
		cout <<"Loai: A" <<endl <<"Tong tien phai tra: " << Thanhtien;
		}
		else if(Tong>=15000)
		{
		Thanhtien=(Tong-(Tong*15/100));
		cout <<"Loai: A" <<endl <<"Tong tien phai tra: " << Thanhtien;
		}
		else if(Tong>=20000)
		{
		Thanhtien=(Tong-(Tong*20/100));
		cout <<"Loai: A" <<endl <<"Tong tien phai tra: " << Thanhtien;
		}

	}
	else if (Loai=='B')
	{
		if(Tong>=10000)
		{
			
		}
		else if(Tong>=15000)
		{
			
		}
		else if(Tong>=20000)
		{
			
		}

	}
	else if (Loai=='B')
	{
		if(Tong>=10000)
		{
			
		}
		else if(Tong>=15000)
		{
			
		}
		else if(Tong>=20000)
		{
			
		}
	}
	else
	{
	return 0;
	}
}
