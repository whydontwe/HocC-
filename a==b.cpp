#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
//	int a;
//	int b;
//	cout <<"nhap vao so a:" <<endl;
//	cin >> a;
//	cout <<"nhap vao so b"<<endl;
//	cin >> b;

// bai tap 1

//if(a>b)
//	{
//		cout<<a-b;
//	}
//else if(a<b)
//	{
//		cout<<b-a;
//	}
//else
//	{
//		cout<<"So a va b bang nhau!";
//	}
//return 0;


//bai tap 2
//      if(a == 0)
//    {
//        if(b == 0)
//            cout<<"phuong trinh vo so nghiem";
//        else
//            cout<<"phuong trinh vo nghiem";
//    }
//     else{
//		cout<<"phuong trinh co nghiem duy nhat la x="; 
//		cout<<(float)-b/a;
//    return 0;
//		}

float a,b,c,d,X1,X2;

	cout <<"nhap vao so a,b,c:" <<endl;
	cin >>a>>b>>c;
if (a!=0)
{
	d =b*b-4*a*c;
	
	if (d>0)
	{
	
		 X1 =(-b+ sqrt(d))/(2*a);
		 X2 =(-b- sqrt(d))/(2*a);
	cout << "Nghiem thu nhat x1 = " << X1 << endl;
	cout << "Nghiem thu hai x2 = " << X2 << endl;
	}
	else if(d==0)
	{
	cout << "Phuong trinh co nghiem kep X1=X2=" << (float)-b/(2*a);
	}
	else
	{ 
	cout << "Phuong tinh vo nghiem";
}
}
else if (a==0)
{
	if(b==0)
	cout << "Phuong trinh vo nghiem" << "\n";
	else 
	{
		d=-c/b;
		cout << "Phuong trinh co nghiem duy nhat : " << d << endl;
	}
}
}



