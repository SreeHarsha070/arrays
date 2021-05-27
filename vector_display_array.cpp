#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ar={1,2,3,4,5};
	for(vector<int>::iterator it=ar.begin();it!=ar.end();it++)
	{
		cout<<*(it);
	}
	return 0;
}
