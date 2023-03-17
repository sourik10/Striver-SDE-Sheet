//recursive approach
//time expotential
#include <bits/stdc++.h> 
int solver(int i,int j,int m,int n){
    if((i==m-1) && (j==n-1)) return 1;
    if((i>=m) || (j>=n)) return 0;
    return solver(i+1,j,m,n) + solver(i,j+1,m,n);
}
int uniquePaths(int m, int n) {
	int i=0,j=0;
    int ans=solver(i,j,m,n);
    return ans;
}

//dp approach
//time O(n*m)
#include <bits/stdc++.h> 
int solver(int i,int j,int m,int n,vector<vector<int>>&dp){
    if((i==m-1) && (j==n-1)) return 1;
    if((i>=m) || (j>=n)) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=solver(i+1,j,m,n,dp) + solver(i,j+1,m,n,dp);
}
int uniquePaths(int m, int n) {
	int i=0,j=0;
    vector<vector<int>>dp(m,vector<int>(n,-1));
    int ans=solver(i,j,m,n,dp);
    return ans;
}


//combinatorics approach
//time O(m-1) OR O(n-1)
#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	int N=(m+n-2);
    int R=m-1;
    double res=1;
    for(int i=1;i<=R;i++){
        res=res*(N-R+i)/i;
    }
    return (int)res;
}

