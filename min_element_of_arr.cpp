#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10]={4,4,4,5,7,9};
	int n=6;
	int maxi=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i]<maxi)
		{
			maxi=a[i];
		}
	}
	cout<<"minimum Element"<<maxi<<endl;
	return 0;
}
