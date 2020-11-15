#include<bits/stdc++.h>
using namespace std;

long long SimilarElementsPairs (vector<int> A,int N) {
  sort(A.begin(),A.end());

   long long res = 0, count = 0, equalTo = 0;
   
   for(int i = 0; i < N; i++)
   {
     if(A[i] + 1 == A[i+1]) count++;
     else if(A[i] == A[i+1])
     {
       equalTo++;
       count++;
     }
    else
    {
      if(count != equalTo)
      {res += (count*(count+1))/2;}
      count = 0; equalTo = 0;
    }
    }
   
   return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
}