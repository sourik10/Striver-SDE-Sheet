//better
#include <bits/stdc++.h> 
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int i=0,j=n-1;
    while(i<m && j>=0){
        if(mat[i][j]==target) return true;
        if(mat[i][j] > target) j--;
        else i++;
    }
    return false;
}

//optimal
//time O(log(n*m))
//space O(1)
#include <bits/stdc++.h> 
bool findTargetInMatrix(vector < vector < int >> & matrix, int m, int n, int target) {
    int low=0,high=m*n-1;
    while(low <= high){
        int mid=(low+high)/2;
        if(matrix[mid/n][mid%n] == target) return true;
        if(matrix[mid/n][mid%n] < target) low=mid+1; //right half
        else high=mid-1; //left half
    }
    return false;
}
