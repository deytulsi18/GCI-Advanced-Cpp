
#include <bits/stdc++.h>

using namespace std;

bool areAnagram(string str1, string str2)
{
    
    int n1 = str1.length();
    int n2 = str2.length();
 
    if (n1 != n2)
    return false;
 

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    
    for (int i = 0; i < n1; i++)
    if (str1[i] != str2[i])
    return false;
 
    return true;
}
int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
    string newS1 = "", newS2 = "";
    for(int i = 0; i < s1.length(); i++)
	{
		if(isalpha(s1[i]))
		newS1 += tolower(s1[i]);
	}
	for(int i = 0; i < s1.length(); i++)
	{
		if(isalpha(s2[i]))
		newS2 += tolower(s2[i]);
	}
	
	if(areAnagram(newS1,newS2))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;		
}

