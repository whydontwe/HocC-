#include<iostream>

using namespace std;
//
// main (){
//// 	cout <<"Ho va Ten: Ngo Cong Minh" << endl
//// 	<< "Gioi tinh: Nam"<< endl
//// 	<< "Dia Chi: Que Xuan 1, Que Son, Quang Nam";
// 	int a = 1; //kieu so nguyen
// 	int f = 3;
// 	float b = 10.3; //kieu so thuc
// 	
// 	char c; //kieu ky tu
// 	
// 	bool d; //kieu dung sai: true or false 
// 	
// 	string e ="minh"; //kieu chuoi
// 	
// 	cout << "a" << endl;
// 	cout << a <<endl;
// 	cout <<b <<endl;
// 	cout <<e <<endl;
// 	cout <<(float)a/f; //ep kieu
// 	
// }
// Cac toan tu mot ngoi: + - * / %(chia lay du)
//main() {
//	int a=10;
//	int b=3;
//	int c=2;
//	cout << a+b-c <<endl;
//	cout << a-b+c <<endl;
//	cout << a*b*c <<endl;
//	cout <<a/b-c <<endl;
//	cout <<a%b <<endl;
//	cout <<a%c;
//}
main(){
	int a=1000000000;
	int b=1500000000;
	int c=3;
	cout <<(unsigned int)a+b <<endl;
	cout <<(unsigned int)(a+b)%999 << endl;
	cout <<(a%c+b%c)%c <<endl;
	cout << (unsigned int)(a+b)%c;
	
}
