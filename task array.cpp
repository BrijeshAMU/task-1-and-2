#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,5,4};
	int *p;
	p = arr;
	cout<<"enter elements:"<<*arr;
	cout<<*(arr+1);
	cout<<*(arr+2);
	cout<<*(arr+3);
	cout<<*(arr+4);
	cout<<"You entered:";
	for(int i=0;i<5;i++)
	{
		cout<<*p;p++;
	}
	return 0;
}
