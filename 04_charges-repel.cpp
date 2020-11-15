
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin>>n;
	string s; cin>>s;
    
	string res ="";
	stack <char> v;

	for(int i = 0; i < n; i++)
	{
		if(v.empty() || v.top() != s[i] )
		{
			v.push(s[i]);
		}
		else
		{
			v.pop();
		}
        
	}
	while(!v.empty())
	{res = v.top() + res;
	v.pop();}
    
	cout<<res.length()<<endl<<res<<endl;
	return 0;		
}

