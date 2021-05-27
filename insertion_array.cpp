#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cap, n, pos, elem;
    cout<<"Enter capacity :"<<endl;
    cin>>cap;
    int arr[cap];
    cout<<"Enter size of array :"<<endl;
    cin>>n;
    if(cap < n)
        cout<<"not enough capacity";
    else
    {
    	cout<<"Enter Elements into array : "<<endl;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        	cout<<"Enter position to insert element at :"<<endl;
            cin>>pos;
            cout<<"Enter element to be inserted : "<<endl;
            cin>>elem;
            if(pos<=n && pos>=0)
            {
                for(int i=n; i>=0; i--)
                {
                    if(i == pos-1)
                    {
                        arr[i] = elem;
                        break;
                    }
                    arr[i] = arr[i-1];
                }
                n++;
            }
            else
                cout<<"Enter valid pos"<<endl;
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    }
}
