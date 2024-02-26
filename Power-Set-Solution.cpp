#################################################################################  Question  ########################################################################################################


Given a string s of length n, find all the possible subsequences of the string s in lexicographically-sorted order.

Example 1:

Input : 
s = "abc"
Output: 
a ab abc ac b bc c
Explanation : 
There are a total 7 number of subsequences possible 
for the given string, and they are mentioned above 
in lexicographically sorted order.
Example 2:

Input: 
s = "aa"
Output: 
a a aa
Explanation : 
There are a total 3 number of subsequences possible 
for the given string, and they are mentioned above 
in lexicographically sorted order.
Your Task:
You don't need to read input or print anything. Your task is to complete the function AllPossibleStrings() which takes a string s as the input parameter and returns a list of all possible subsequences (non-empty) that can be formed from s in lexicographically-sorted order.

Expected Time Complexity: O( n*2n  )
Expected Space Complexity: O( n * 2n )

Constraints: 
1 <= n <= 16
s will constitute of lower case english alphabets








#################################################################################  Solution  ########################################################################################################
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<string> v;
void f(string &s, int i, string x) {
        if(i == s.size()) { v.push_back(x); return; }
        f(s, i + 1, x + s[i]), f(s, i + 1, x);
}
vector<string> AllPossibleStrings(string s) {
	    f(s, 0, "");
	    return sort(v.begin(), v.end()), v.erase(v.begin()), v;
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends


