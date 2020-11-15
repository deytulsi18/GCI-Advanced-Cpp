
#include <bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int freq = 0, maxFreq = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1) 
            {
                freq++;
                maxFreq = max(freq, maxFreq);
            }
            else 
            {
                freq = 0;
            }
        }
        return maxFreq;
    }
    int main()
    {
            int n, input; cin>>n;
            vector <int> arr;
            for(int i = 0; i < n; i++)
            {
                cin>>input;
                arr.emplace_back(input);
            }

            cout<<findMaxConsecutiveOnes(arr)<<endl;
    }
