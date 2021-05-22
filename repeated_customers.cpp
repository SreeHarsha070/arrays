#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10]={1,2,2,3,4,4,4,5,7,9};
	int n=10;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				swap(a[j],a[n-1]);
				n=n-1;		
			}	
		}
		if(count>=1)
		{
			cout<<a[i]<<endl;
		}
	}
	return 0;
}
