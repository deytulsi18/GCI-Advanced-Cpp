
#include <bits/stdc++.h>

using namespace std;

int main() {
		int n; cin>>n;
		int arr[n];

		for(int i = 0; i < n; i++)
		cin>>arr[i];

		vector<int> v;
		int max = INT_MIN;

		for(int i = 0; i < n; i++)
		{
			if(arr[n-1-i] >= max)
			{ 
				v.emplace_back(arr[n-1-i]);
				max = arr[n-1-i];
			}
		}
        
		for(int i = 0; i < v.size(); i++)
		cout<<v[v.size()-1-i]<<" ";
		cout<<endl;
	return 0;		
}

