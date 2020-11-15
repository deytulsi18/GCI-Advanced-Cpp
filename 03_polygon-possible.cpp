
#include <bits/stdc++.h>

using namespace std;

string getRes(int arr[], int num)
{
	if(num < 3) return "No";
	int sum = 0;
    sort(arr,arr+num);

	for(int i = 0; i < num - 1; i++)
	sum += arr[i];

	if(sum > arr[num-1])
	return "Yes";
	else
	return "No";
}
int main() {
	int testCases;
	cin >> testCases;	

	while(testCases-->0)
	{			
	int num;					
	cin>>num;
	int arr[num];

	for(int i = 0; i < num; i++)
	cin>>arr[i];

	cout<<getRes(arr,num)<<endl;
	}
	return 0;		
}

