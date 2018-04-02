#include<iostream>
using namespace std;
void input(int &a)
{cin >> a;}
int proccess (int a)
	{int b;
	b=a-1;
return b;}
void output(int b)
{cout <<"gia tri tra ve"<<b;}
int main()
{int a,b,c;
input(a);
b=proccess(a);
output(b);
return 0;}
