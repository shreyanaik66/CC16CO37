#include<iostream>
using namespace std;
int main()
{
	int array[10],n;
	cout<<"\nEnter the size";
	cin>>n;
	cout<<"\nEnter the data:";
	for(int i =0; i<n ; i++)
	{
		cin>>array[i];
	}
	for(int i=0; i<n ; i++)
	{
		if(isnumeric(array[i]))
		{
			cout<<"\n"<<array[i]<<" is a number";
		}
		else
		{
			cout<<"\n"<<array[i]<<" is a character";
		}
	}	
}
 int isnumeric(int a)
 {
	 if(a=='0' || a=='1' || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7' || a=='8' || a=='9')
	 return 1;
	 else
	 return 0;
 }

	 
