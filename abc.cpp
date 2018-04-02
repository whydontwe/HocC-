#include <iostream>

using namespace std;

//main(){
//	int a=1000000000;
//	int b=1500000000;
//	cout<<(unsigned int)a+b <<endl;
//	cout<<(unsigned int)(a+b)%999;
//}
int main(){
	int a;
	int b;
	cout <<"nhap vao so a:" <<endl;
	cin >> a;
	cout <<"nhap vao so b"<<endl;
	cin >> b;
	
//	if(a>0 && b>0)
//	{
//		cout << a+b;
//	}
//	else if(a>0 && b<0)
//	{
//		cout<< a-b;
//	}
//		else if(a<0 && b>0)
//	{
//		cout<< b-a;
//	}
//	else 
//	{
//		cout << "So a va b deu nho hon 0";
//	}
//	return 0;


if (a>0 || b>0)
{
	cout << a+b;
}
else 
{
	cout <<"Ca a va b deu nho hon 0";
}
}
