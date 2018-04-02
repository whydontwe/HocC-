#include <iostream>
using namespace std;
void input(int &a, int &b)
{ cin >> a >> b;}
int proccess(int a,int b)
{ int c;
  c=a+b;
  return c;
}
void output(int c)
{ cout<<"Sum="<<c;}
int main()
{int a,b,c;
    input(a,b);
    c=proccess(a,b);
    output(c);
	return 0;
}
