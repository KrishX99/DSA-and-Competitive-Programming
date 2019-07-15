#include <bits/stdc++.h> 
using namespace std; 
 
string MaxFreq(string str) 
{ 
	int n = str.size(); 

	unordered_map<string, int> m; 

	for (int i = 0; i < n; i++) { 
		string s = ""; 
		for (int j = i; j < n; j++) { 
			s += str[j]; 
			m[s]++; 
		} 
	} 

	int maxi = 0; 

	string s; 
	for (auto i = m.begin(); i != m.end(); i++) { 
		if (i->second > maxi) { 
			maxi = i->second; 
			s = i->first; 
		} 
		else if (i->second == maxi) { 
			string ss = i->first; 
			if (ss.size() > s.size()) 
				s = ss; 
		} 
	} 

	return s; 
} 

int main() 
{ 
	string str = "ababecdecd"; 
	cout << MaxFreq(str); 

	return 0; 
} 

