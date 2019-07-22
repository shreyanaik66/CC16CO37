#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	
	string str,arr[10];
	int n;
	cout<<"\nEnter the number of terms: ";
	cin>>n;
	cout<<"\nEnter each term:";
	for(int i =0; i<n ; i++)
	{
		cin>>str;
		arr[i]=str;
	}
	for(int i=0; i<n ; i++)
	{
		   if(arr[i]=="+"||arr[i]=="-" || arr[i]=="<" || arr[i]==">" ||arr[i]=="*")
		   cout<<"\n"<<arr[i]<<" is a operator";
		   else if(arr[i]==";" || arr[i]=="," || arr[i]=="(" || arr[i]==")")
		   cout<<"\n"<<arr[i]<<" is a delimiter";
		   else if(arr[i]=="for" || arr[i]=="if" || arr[i]=="int" || arr[i]=="float" || arr[i]=="while" ||arr[i]=="string")
		   cout<<"\n"<<arr[i]<<" is a keyword";
		   else
		   cout<<"\n"<<arr[i]<<" is a identifier";
	   }
   return 0;
}
 

 
   
   
		

	 
