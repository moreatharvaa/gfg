Example 1:

Input: 5

Output:
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1
 

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20

  
  
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        
        int start =1;
      
      
        for(int i=0;i<n;i++){
          
          
          if(i%2 ==0) start = 1;
          
          
          else start = 0;
          
         
          for(int j=0;j<=i;j++){
              cout<<start<<" ";
              start = 1-start;
          }
          cout<<endl;
        }
      
      
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
