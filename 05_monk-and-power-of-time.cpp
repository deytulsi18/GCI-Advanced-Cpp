
#include <bits/stdc++.h>

using namespace std;

int getRes(vector<int> &arr, vector<int> &arr1, int n)
{
	int time = 0, aux, i, j;

	for(i = 0; i < n;)
	{
		if(arr[i] == arr1[i]) i++;
		else
		{
			time++;
			aux = arr[i];
            
			for(j = i; j < n; j++)
			arr[j] = arr[j+1];
			arr[n - 1] = aux;
		}
	}
	return time+n;
}
int main() {
    int n, input; cin>>n;
	vector<int> arr; vector<int> brr;
	for(int i = 0; i < n; i++)
	{
		cin>>input;
		arr.emplace_back(input);
	}
	for(int i = 0; i < n; i++)
	{
		cin>>input;
		brr.emplace_back(input);
	}

	cout<<getRes(arr,brr,n)<<endl;
    
	return 0;		
}

