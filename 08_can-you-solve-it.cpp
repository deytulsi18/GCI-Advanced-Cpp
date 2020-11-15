
#include <bits/stdc++.h>

using namespace std;

int getRes(int arr[], int n)
{
	int maxim[n], minim[n];
        for(int i = 0; i < n; i++)
		{
			maxim[i] = arr[i]+i;
			minim[i] = arr[i]-i;
		}

		int ans1 = *max_element(maxim,maxim+n) - *min_element(maxim,maxim+n);
		int ans2 = *max_element(minim,minim+n) - *min_element(minim,minim+n);

		return max(ans1,ans2);

}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int testCases;
	cin >> testCases;	

	while(testCases-->0)
	{
		int n; cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++) cin>>arr[i];

        cout<<getRes(arr,n)<<endl;

	}									
	return 0;		
}

