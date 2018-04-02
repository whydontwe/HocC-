#include <iostream>

using namespace std;


//vòng lap
int main()

//tinh tong
//{
//	int n;
//	cin >> n;
//	int a[n];
//	int Sum=0;
//	for (int i=0; i<n; i++)
//	{
//		cin >> a[i];
//	}
//	for(int i=1;i<=n;i++)
//	{
//		Sum+=i;
//	}
//		cout<<"Tong= "<<Sum;
//}

//gia tri lon nhat
//{	int n;
//	cin >> n;
//	int a[4];
//	int max;
//	
//	for (int i=0; i<n; i++)
//	{
//		cin>>a[i];
//	}
//	max=a[0];
//	for(int i; i<n; i++) 
//	{
//		if(max <=a[i])
//		max=a[i];
//		
//	}
//	cout<<max;
//	
//}

//Gia tri nho nhat
{	int n;
	cin >> n;
	int a[n];
	int min;
	
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	min=a[0];
	for(int i; i<n; i++) 
	{
		if(min>=a[i])
		min=a[i];
		
	}
	cout<<min;
	
}

//{
//int tong;
//for (int i=1; i<=5; i++)
//{
//	tong+=i;
//}
//cout << tong;
//}
