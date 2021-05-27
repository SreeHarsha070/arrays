#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=-1;
	int n,key,keypos;
	cout<<"Enter maximum size of array :"<<endl;
	cin>>n;
	int arr[n];
	// array of size n
	//enter elements into array
	cout<<"Enter elements into array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to be deleted : "<<endl;
	cin>>key;
	// try to locate key using linear search
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			swap(arr[i],arr[n-1]);
			n--;
			flag=1;
			
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<"\t";
			}
			break;
		}
	}
	// if element found , flag value is 1 :
	if(flag==-1)
	{
		cout<<flag<<" : as element is not found";
		
	}
	
	
	
}
