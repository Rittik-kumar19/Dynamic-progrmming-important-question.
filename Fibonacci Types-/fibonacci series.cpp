// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#define mod 1000000007
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // if(n==0){
        //     return 0;
        // }
        // if(n==1){
        //     return 1;
        // }
        // return ((nthFibonacci(n-1)%mod)+(nthFibonacci(n-2)%mod))%mod;
        long long int *arr=new long long int[n+6];
        for(int i=0;i<(n+2);i++){
            arr[i]=0;
        }
        arr[1]=1;
        for(int i=2;i<(n+2);i++){
            arr[i]=((arr[i-1]%mod)+(arr[i-2]%mod))%mod;
        }
        return arr[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends