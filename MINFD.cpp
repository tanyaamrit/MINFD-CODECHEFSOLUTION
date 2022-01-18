#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr + n, greater<int>());
	    int sum=0;
	    int i=0;
	    for(i=0;i<n;i++)
	    {   sum+=arr[i];
	        if(sum>=x)
	            {break;}
	    }
	    if(sum>=x)
	        cout<<i+1<<"\n";
	    else
	        cout<<"-1"<<"\n";
	    
	    
	    
	}
	return 0;
}


