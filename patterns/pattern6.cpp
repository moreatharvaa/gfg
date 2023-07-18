Example 1:

Input: 5

Output:
1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1 

 

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20


Soltuion:
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=n-i+1;j++){
	            cout<<j<<" ";
	        }
	        cout<<endl;
	    }
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
